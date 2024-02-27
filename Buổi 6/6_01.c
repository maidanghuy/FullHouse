//https://laptrinh24h.vn/problem/fhc06b01
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void sumGDB( long long n ) {
    long long sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if ( n % i == 0 ){
            sum += i;
            if ( n / i != i ){
                sum += n / i;
            }
        }
    }
    printf("%lld\n", sum);
}
int main() {
    long long n;
    scanf("%lld", &n);
    sumGDB(n);
    return 0;
}