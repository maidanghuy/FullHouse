//https://laptrinh24h.vn/problem/fhc02b02
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if ( n % 3 == 0 && n % 5 == 0 ) {
        printf("1\n");
    }else {
        printf("0\n");
    }
    return 0;
}