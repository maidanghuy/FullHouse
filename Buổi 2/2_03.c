//https://laptrinh24h.vn/problem/fhc02b03
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if ( n < 0 ){
        printf("INVALID\n");
    }else if ( n % 4 == 0 && n % 100 != 0 || n % 400 == 0 ) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}