//https://laptrinh24h.vn/problem/fhc02b18
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int wed, len, x;
    scanf("%d %d %d", &wed, &len, &x);
    long long result = 1ll * ceil(1.0 * wed / x) * ceil(1.0 * len / x);
    printf("%lld\n", result);
}