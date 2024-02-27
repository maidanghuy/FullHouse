//https://laptrinh24h.vn/problem/fhc06b08
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long UCLN( long a, long b ) {
    if ( b == 0 ) return a;
    return UCLN(b, a % b);
}

int main() {
    long a, b;
    scanf("%ld %ld", &a, &b);
    printf("%ld %ld\n", UCLN(a, b), a / UCLN(a, b) * b);
    return 0;
}