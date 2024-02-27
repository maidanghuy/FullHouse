//https://laptrinh24h.vn/problem/fhc02b20
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    long long l, one, two;
    scanf("%lld %lld %lld", &l, &one, &two);
    long long result;
    if ( 2 * one <= two ) {
        result = l * one;
    }else {
        result = (l / 2) * two + (l % 2) * one;
    }
    printf("%lld\n", result);
}