#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

void loop() {
  for (uint64_t i = 0; i < (0x1 << 30); i++) {
  }
}
void slp() { sleep(10); }

int main(int argc, char *argv[]) {
  loop();
  slp();
  return 0;
}