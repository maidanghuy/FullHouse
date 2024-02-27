//https://laptrinh24h.vn/problem/fhc02b13
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = fmax(a, b);
    max = fmax(max, c);
    int min = fmin(a, b);
    min = fmin(min, c);
    printf("%d %d", max, min);
    return 0;
}