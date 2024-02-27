//https://laptrinh24h.vn/problem/fhc07b14
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long _fibonacci( int k ) {
    long long sum = 0;
    long long sum_1 = 1;
    long long sum_2 = 1;
    if ( k == 1 || k == 2 ) return 1;
    int count = 3;
    while (count <= k) {
        sum = sum_1 + sum_2;
        sum_1 = sum_2;
        sum_2 = sum;
        count++;
    }
    return sum;
}

int main() {
    int k;
    scanf("%d", &k);
    printf("%lld\n", _fibonacci(k - 1));
    return 0;
}