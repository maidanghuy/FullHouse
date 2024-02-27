//https://laptrinh24h.vn/problem/fhc03b12
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
    long long n;
    scanf("%lld", &n);
    long long countOdd = 0;
    long long countEven = 0;
    while ( n != 0 ) {
        if ( (n % 10)&1 ) {
            countOdd++;
        }else {
            countEven++;
        }
        n /= 10;
    }
    printf("%lld %lld", countEven, countOdd);
    return 0;
}