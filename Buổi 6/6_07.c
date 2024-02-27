//https://laptrinh24h.vn/problem/fhc06b07
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _primeNumber( int n ) {
    if ( n < 2 ) return 0;
    if ( n < 4 ) return 1;
    if ( !(n & 1) || !(n % 3) ) return 0;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if ( !(n % i) || !(n % (i + 2)) ) return 0;
    }
    return 1;
}

void primeNumber( int s, int e ) {
    for (int i = s; i <= e; i++) {
        if ( _primeNumber(i) ) {
            printf("%d ", i);
        }
    }
}
int main() {
    int s, e;
    scanf("%d %d", &s, &e);
    primeNumber(s, e);
    return 0;
}