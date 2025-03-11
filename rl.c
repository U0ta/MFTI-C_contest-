#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long gcd(long long p, long long e) {
  unsigned long long q;
  unsigned long long tmp;
  long long x, y;
  x = llabs(p);
  y = llabs(e);
  if (y > x) {
      tmp = x; x = y; y = tmp;
  }
  q = 2;
  assert (y > 0);
  while (q != 0) {
  	q = x % y;
  	x = y;
  	y = q;
  }
  return x;
}

int main() {
  unsigned long long x = 0, y = 0, g;
  int res;
  
  res = scanf("%llu %llu", &x, &y);
  assert(res == 2);
  g = gcd(x, y);
  printf("%llu\n", g);
  return 0;
}
