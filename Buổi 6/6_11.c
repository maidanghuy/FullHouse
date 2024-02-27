//https://laptrinh24h.vn/problem/fhc06b11
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int luckyNumber( int n ) {
    while ( n != 0 ) {
        int temp = n  % 10;
        if ( temp != 0 && temp != 6 && temp != 8 ) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", luckyNumber(n));
    return 0;
}