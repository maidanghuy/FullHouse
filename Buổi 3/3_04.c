//https://laptrinh24h.vn/problem/fhc03b04
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    float sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += 1.0 * 1 / i;
    }
    printf("%.3f\n", sum);
    return 0;
}