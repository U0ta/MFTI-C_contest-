#include <stdio.h>
#include <math.h>

unsigned long long cont_fract(unsigned long long c, unsigned long long d) {
	unsigned long long q, r;
	if(d == 0) {
		return 0;
	} 
	q = c / d;
	r = c % d;
	printf("%llu", q);
	return cont_fract(d, r);
}

int main() {
	unsigned long long a, b;
	scanf("%llu %llu", &a, &b);
	cont_fract(a,b);
	return 0;
}
