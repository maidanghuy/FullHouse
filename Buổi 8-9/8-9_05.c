//https://laptrinh24h.vn/problem/fhc08b05
#include <stdio.h>
#include <math.h>

int _prime( long n ) {
    if ( n < 2 ) return 0;
    if ( n < 4 ) return 1;
    if ( !(n % 2) || !(n % 3) ) return 0;
    for (int i = 5; i <= sqrt(n) ; i += 6 ) {
        if ( !(n % i) || !(n % (i + 2)) ) return 0;
    }
    return 1;
}

void tPrime( int n ) {
    for(long i = 2; i <= sqrt(n); i++) {
        if ( _prime(i) ) {
            printf("%lld ", 1ll * i * i);
        }
    }
}

int main(){
    long n;
    scanf("%ld", &n);
    tPrime(n);
    return 0;
}