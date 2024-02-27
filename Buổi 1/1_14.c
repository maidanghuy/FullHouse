//https://laptrinh24h.vn/problem/fhc01b14
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", (int)ceil(1.0 * a / b) * b);
    return 0;
}