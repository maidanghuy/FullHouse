//https://laptrinh24h.vn/problem/fhc02b05
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("%.2f\n", sum / 2);
    return 0;
}