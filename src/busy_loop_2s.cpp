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
  // takes about 2s on a 3GHZ cpu
  for (uint64_t i = 0; i < (0x1ul << 30); i++) {
  }
}

int main() {
  std::cout << "Running..." << std::endl;
  loop();
  std::cout << "End..." << std::endl;
  return 0;
}