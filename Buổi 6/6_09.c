//https://laptrinh24h.vn/problem/fhc06b09
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void _primeNumber( int n, int k ) {
    int count = 0;
    for ( int i = 2; i <= sqrt(n); i++) {
        if ( n % i == 0 ) {
            while( n % i == 0 ) {
                count ++;
                n /= i;
                if (count == k ){
                    printf("%d", i);
                    return;
                }
            }
        }
    }
    if ( n != 1 && count == k - 1 ) {
        printf("%d", n);
    }else {
        printf("-1");
    }
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    _primeNumber(n, k);
    return 0;
}