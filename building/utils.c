#include "utils.h"
#include <inttypes.h>
#include <stdio.h>

void report(uint32_t x) {
  printf("The value passed to report() is %"PRIu32"\n", x);
}
