//https://laptrinh24h.vn/problem/fhc03b02
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", 1ll * n * (n +1) * (2 * n + 1) / 6);
    return 0;
}