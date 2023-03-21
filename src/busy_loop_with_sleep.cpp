/**
 * @author Fred Chen
 * @email fred.chen@live.com
 */

#include <chrono>
#include <climits>
#include <cstdint>
#include <future>
#include <iostream>
#include <thread>
#include <vector>

void loop() {
  for (uint64_t i = 0; i < (0x1ul << 30); i++) {
  }
}

void sleep() {
  // uncomment me to show the off-cpu time
  std::this_thread::sleep_for(std::chrono::seconds(10));
}

int main() {
  std::vector<std::future<void>> futs;

  std::cout << "Begin..." << std::endl;

  // for (int i = 0; i < 2; i++) {
  //   futs.emplace_back(std::async(std::launch::async, loop));
  // }
  std::cout << "Running..." << std::endl;

  sleep();

  // for (auto &v : futs) {
  //   v.get();
  // }

  std::cout << "End..." << std::endl;
  return 0;
}