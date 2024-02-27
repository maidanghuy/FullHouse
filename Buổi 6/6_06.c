//https://laptrinh24h.vn/problem/fhc06b06
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _reverse( long long n ) {
    long long res = n;
    long long temp = 0;
    long long sum = 0;
    while ( n != 0 ) {
        temp = temp * 10 + n % 10;
        sum += n % 10;
        n /= 10;
    }
    if ( temp == res && sum % 10 == 0 ) return 1;
    return 0;
}
void reverse( long long n ) {
    int count = 0;
    for(int i = 1; i <= pow(10, n) - 1; i++) {
        if ( _reverse(i) ) count++;
    }
    printf("%d\n", count);
}
int main() {
    long long n;
    scanf("%lld", &n);
    reverse(n);
    return 0;
}