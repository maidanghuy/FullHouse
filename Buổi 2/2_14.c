//https://laptrinh24h.vn/problem/fhc02b14
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ( a + b > c && a + c > b && b + c > a) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
}