//https://laptrinh24h.vn/problem/fhc07b14
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long _fibonacci( int k ) {
    long long sum = 0;
    long long sum_1 = 1;
    long long sum_2 = 1;
    if ( k == 1 || k == 2) return sum_1;
    int count = 3;
    while (1) {
        if (count  == k){
            return sum;
        }
        sum = sum_1 + sum_2;
        sum_1 = sum_2;
        sum_2 = sum;
        count++;
    }
}

int main() {
    int k;
    scanf("%d", &k);
    printf("%lld\n", _fibonacci(k));
    return 0;
}