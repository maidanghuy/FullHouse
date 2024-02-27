//https://laptrinh24h.vn/problem/fhc01b01
#include <stdio.h>
#include <math.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n%lld\n%lld\n%.2f\n", a + b, a - b, a * b, 1.0 * a / b);
    return 0;
}