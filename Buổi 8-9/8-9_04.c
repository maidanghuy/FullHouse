//https://laptrinh24h.vn/problem/fhc08b04
#include <stdio.h>
#include <math.h>

int _primeNumber( int n, int k ){
    int count = 0;
    for ( int i = 2; i <= sqrt(n); i++ ) {
        if ( !(n % i) ) {
            while( !(n % i) ) {
                count++;
                n /= i;
                if ( count == k ) return i;
            }
        }
    }
    if ( n != 1 && count == k - 1 ) return n;
    return -1;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", _primeNumber(n, k));
    return 0;
}