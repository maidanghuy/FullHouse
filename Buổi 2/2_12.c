//https://laptrinh24h.vn/problem/fhc02b12
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c;
    scanf("%c", &c);
    if (  c >= 97 && c < 122 ) {
        printf("%c\n", c + 1);
    }else if ( c >= 65 && c < 89) {
        printf("%c\n", c + 33);
    }else if ( c == 90 || c == 122 ){
        printf("%c\n", 97);
    }else {
        printf("INVALID\n");
    }
}