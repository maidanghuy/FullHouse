//https://laptrinh24h.vn/problem/fhc06b02
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int primeNumber( long long n ) {
    if ( n < 2 ) return 0;
    if ( n < 4 ) return 1;
    if ( !(n & 1) || !(n % 3) ) return 0;
    for (int i = 5; i <= sqrt(n); i+=6) {
        if ( !(n % i) || !(n % (i + 2)) ) return 0;
    }
    return 1;
} 
int main() {
    long long n;
    scanf("%lld", &n);
    if ( primeNumber(n) ) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}