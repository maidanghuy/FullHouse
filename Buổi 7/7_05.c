//https://laptrinh24h.vn/problem/fhc07b05
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _beautifulNumber( int n ) {
    for (int i = 2; i <= sqrt(n); i++) {
        if ( n % i == 0 ){
            int count = 0;
            while( n % i == 0 ) {
                count++;
                n /= i;
                if (count == 2 ) return 1;
            }
        }
    }
    return 0;
}

void beautifulNumber( int s, int e ) {
    for (int i = s; i <= e; i++) {
        if ( _beautifulNumber(i) ) {
            printf("%d ", i);
        }
    }
}
int main() {
    int s, e;
    scanf("%d %d", &s, &e);
    beautifulNumber(s, e);
    return 0;
}