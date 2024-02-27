//https://laptrinh24h.vn/problem/fhc08b07
#include <stdio.h>
#include <math.h>

int _prime( int n ) {
    if ( n < 2 ) return 0;
    if ( n < 4 ) return 1;
    if ( !(n % 2) || !(n % 3) ) return 0;
    for (int i = 5; i <= sqrt(n) ; i += 6 ) {
        if ( !(n % i) || !(n % (i + 2)) ) return 0;
    }
    return 1;
}

int _prime_2( int n ) {
    for ( int i = 2; i <= sqrt(n); i++) {
        if ( n % i == 0 ) return i;
    }
    return n;
}

void primeGDB( int n ) {
    for (int i = 1; i <= n ; i++) {
        if ( i == 1 ) {
            printf("1\n");
        }else if ( !(i & 1)) {
            printf("2\n");
        }else if ( _prime(i) ) {
            printf("%d\n", i);
        }else {
            printf("%d\n", _prime_2(i));
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    primeGDB(n);
    return 0;
}