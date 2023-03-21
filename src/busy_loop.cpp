/**
 * @author Fred Chen
 * @email fred.chen@live.com
 */

#include <climits>
#include <cstdint>
#include <future>
#include <iostream>
#include <vector>

void loop() {
  for (uint64_t i = 0; i < ULLONG_MAX; i++) {
  }
}

int main() {
  std::vector<std::future<void>> futs;

  std::cout << "Begin..." << std::endl;

  for (int i = 0; i < 2; i++) {
    futs.emplace_back(std::async(std::launch::async, loop));
  }

  std::cout << "Running..." << std::endl;

  for (auto &v : futs) {
    v.get();
  }

  std::cout << "End..." << std::endl;
  return 0;
}