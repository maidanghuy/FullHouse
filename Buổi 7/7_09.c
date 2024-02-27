//https://laptrinh24h.vn/problem/fhc07b09
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _reverse( long long n ) {
    long long res = n;
    long long temp = 0;
    while ( n != 0 ) {
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    return res == temp;
}

int _prime( int n ){
    int count = 0;
    for( int i = 2; i <= sqrt(n); i++ ) {
        if (n % i == 0 ) {
            count++;
            while(n % i == 0) {
                n /= i;
            }
        }
        if (count >= 3) return 1;
    }
    if ( n != 1 && count == 2 ) return 1;
    return 0;
}

void beautifulNumber( int s, int e ) {
    int count = 0;
    for ( int i = s; i <= e; i++ ) {
        if ( _reverse(i) && _prime(i) ) {
            printf("%d ", i);
            count++;
        }
    }
    if ( count == 0 ) {
        printf("-1");
    }
} 

int main() {
    int s, e;
    scanf("%d %d", &s, &e);
    beautifulNumber(s, e);
    return 0;
}