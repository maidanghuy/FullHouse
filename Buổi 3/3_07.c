//https://laptrinh24h.vn/problem/fhc03b07
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum;
    if ( !(n&1) ) {
        sum = (n / 2) * (n * 2);
    }else {
        sum = (n / 2) * (n * 2 + 2) + 1;
    }
    printf("%d\n", sum);
    return 0;
}