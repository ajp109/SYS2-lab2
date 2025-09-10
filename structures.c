#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

typedef struct {
  int32_t x;
  int32_t y;
} IntVector;

uint64_t modSquared(IntVector vector) {
  return vector.x*vector.x + vector.y*vector.y;
}

int main(void) {
  IntVector p;
  IntVector q;

  p.x = -3;
  p.y = 1;

  q = p;
  q.x = 4;

  printf("(%"PRId32", %"PRId32").  Mod-squared %"PRIu64"\r\n", q.x, q.y, modSquared(q));
  printf("(%"PRId32", %"PRId32").  Mod-squared %"PRIu64"\r\n", p.x, p.y, modSquared(p));

  return 0;
}
