//https://laptrinh24h.vn/problem/fhc07b13
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _fibonacci( long long n ) {
    long long sum = 0;
    long long sum_1 = 0;
    long long sum_2 = 1;
    while (sum < n) {
        sum = sum_1 + sum_2;
        sum_1 = sum_2;
        sum_2 = sum;
    }
    return sum == n;
}

int main() {
    long long n;
    scanf("%lld", &n);
    if ( _fibonacci(n) ) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}