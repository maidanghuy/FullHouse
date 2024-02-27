//https://laptrinh24h.vn/problem/fhc03b09
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int countNumber(long long n, int count) {
    if ( n < 10 ) return 1;
    return 1 + countNumber(n / 10, count);
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%d\n", countNumber(n, 0));
    return 0;
}