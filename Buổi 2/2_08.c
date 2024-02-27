//https://laptrinh24h.vn/problem/fhc02b08
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c;
    scanf("%c", &c);
    if ( c >= 65 && c <= 90 || c >= 97 && c <= 122 ) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
}