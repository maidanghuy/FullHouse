//https://laptrinh24h.vn/problem/fhc06b10
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

int main() {
    int t;
    scanf("%d", &t);
    long long n;
    while( t-- ) {
        scanf("%lld", &n);
        if ( _reverse(n) ) {
            printf("YES\n");
        }else {
            printf("NO\n");
        }
    }
    return 0;
}