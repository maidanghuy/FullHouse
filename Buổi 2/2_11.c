//https://laptrinh24h.vn/problem/fhc02b11
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c;
    scanf("%c", &c);
    if ( c >= 97 && c <= 122) {
        printf("%c\n", c - 32);
    }else {
        printf("%c\n", c);
    }
}