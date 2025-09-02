#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {

  uint32_t number = 10;

  uint32_t * pointer = &number;

  printf("Number is %"PRIu32", stored at address %p\n", number, (void *)&number);
  printf("Pointer is %p, stored at address %p, target value is %"PRIu32"\n", (void *)pointer, (void *)&pointer, *pointer);

  *pointer = 12;

  printf("Number is %"PRIu32", stored at address %p\n", number, (void *)&number);
  printf("Pointer is %p, stored at address %p, target value is %"PRIu32"\n", (void *)pointer, (void *)&pointer, *pointer);

  return 0;
}
