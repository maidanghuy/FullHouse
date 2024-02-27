//https://laptrinh24h.vn/problem/fhc01b11
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    long long sum = 1ll * n * (n + 1);
    printf("%lld\n", sum);
    return 0;
}