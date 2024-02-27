//https://laptrinh24h.vn/problem/fhc03b03
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 0; i <= n; i+=3) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}