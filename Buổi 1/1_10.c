//https://laptrinh24h.vn/problem/fhc01b10
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum = 1 - (1 / (1.0 * n + 1));
    printf("%.4f\n", sum);
    return 0;
}