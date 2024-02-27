//https://laptrinh24h.vn/problem/fhc02b19
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int l, one, two;
    scanf("%d %d %d", &l, &one, &two);
    int result;
    if ( 2 * one <= two ) {
        result = l * one;
    }else {
        result = (l / 2) * two + (l % 2) * one;
    }
    printf("%d\n", result);
}