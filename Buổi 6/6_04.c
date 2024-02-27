//https://laptrinh24h.vn/problem/fhc06b04
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int squareNumber( long long n ) {
    return sqrt(n) == (int)sqrt(n);
}
int main() {
    long long n;
    scanf("%lld", &n);
    if (squareNumber(n)) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}