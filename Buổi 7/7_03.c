//https://laptrinh24h.vn/problem/fhc07b03
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int perfectNumber( int n ) {
    int sum = 1;
    for( int i = 2; i <= sqrt(n); i++ ) {
        if ( n % i == 0 ) {
            sum += i;
            if ( n / i != i ) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", perfectNumber(n));
    return 0;
}