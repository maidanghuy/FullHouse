//https://laptrinh24h.vn/problem/fhc08b09
#include <stdio.h>
#include <math.h>

int _perfectNumber( long long n ) {
    long long count = 0;
    long long res = n;
    long long sum = 0;
    while ( !(n & 1) ) {
        count++;
        n = n >> 1;
    }
    if ( count == 1 || !(count & 1) ) {
        sum = pow(2, count) * (pow(2, count + 1) - 1 );
    }
    return sum == res;
}

int main(){
    long long n;
    scanf("%lld", &n);
    if ( _perfectNumber(n) ) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}

//6         2^1*3      ->2^1*(2^2-1)
//28        2^2*7      ->2^2*(2^3-1)
//496       2^4*31     ->2*4*(2^5-1)
//8128      2^6*127    ->2*6*(2^7-1)