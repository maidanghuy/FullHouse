//https://laptrinh24h.vn/problem/fhc03b10
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int countNumber(long long n, int res) {
    if ( n < 10 ) return n;
    return n % 10 + countNumber(n / 10, res);
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%d\n", countNumber(n, 0));
    return 0;
}