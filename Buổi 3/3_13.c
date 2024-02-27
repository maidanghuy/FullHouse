//https://laptrinh24h.vn/problem/fhc03b13
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _primeNumber(long long n){
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}
long long primeNumber( long long n) {
    if  ( n == 0 ) return 0;
    if ( _primeNumber(n % 10) ) {
        return 1 + primeNumber(n / 10);
    }else {
        return 0 + primeNumber(n / 10);
    }
}

int main() {
    long long n;
    scanf("%lld", &n);
    long long countPrime = 0;
    printf("%lld\n", primeNumber(n));
    return 0;
}