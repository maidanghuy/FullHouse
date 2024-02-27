//https://laptrinh24h.vn/problem/fhc02b21
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, S;
    scanf("%d %d", &n, &S);
    int count = 0;
    while ( S != 0 ) {
        count += S / n;
        S = S % n;
        n--;
    }
    printf("%d\n", count);
}