//https://laptrinh24h.vn/problem/fhc03b11
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
    long long n;
    scanf("%lld", &n);
    long long sumOdd = 0;
    long long sumEven = 0;
    while ( n != 0 ) {
        if ( (n % 10)&1 ) {
            sumOdd += n % 10;
        }else {
            sumEven += n % 10;
        }
        n /= 10;
    }
    printf("%lld %lld\n", sumEven, sumOdd);
    return 0;
}