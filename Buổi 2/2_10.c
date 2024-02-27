//https://laptrinh24h.vn/problem/fhc02b10
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c;
    scanf("%c", &c);
    if ( c >= 65 && c <= 90) {
        printf("%c\n", c + 32);
    }else {
        printf("%c\n", c);
    }
}