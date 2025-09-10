#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint32_t x;

int main() {

  uint32_t a;

  printf("x is stored at address %p\n", (void *)&x);
  printf("a is stored at address %p\n", (void *)&a);

  return 0;
}

