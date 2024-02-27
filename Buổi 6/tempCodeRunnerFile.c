//https://laptrinh24h.vn/problem/fhc06b05
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void _primeNumber( long long n ) {
    for ( long long i = 2; i <= sqrt(n); i++) {
        int count = 0;
        if ( n % i == 0 ) {
            while( n % i == 0 ) {
                count ++;
                n /= i;
            }
        }
        if (count != 0) {
            printf("%lld^%d", i, count);
        }
        if (n != 1) {
            printf (" * ");
        }
    }
    if (n != 1) {
        printf("%lld^1", n);
    }
}
int main() {
    long long n;
    scanf("%lld", &n);
    _primeNumber(n);
    return 0;
}