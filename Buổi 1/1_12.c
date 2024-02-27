//https://laptrinh24h.vn/problem/fhc01b12
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long sum;
    if ( n&1 ) {
        sum = (n + 1) / - 2 ;
    }else {
        sum = n / 2;
    }
    printf("%lld\n", sum);
    return 0;
}