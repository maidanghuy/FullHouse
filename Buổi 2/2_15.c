//https://laptrinh24h.vn/problem/fhc02b15
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ( a + b > c && a + c > b && b + c > a) {
        if ( a == b == c ) {
            printf("1\n");
        }else if ( a == b || a == c || b == c) {
            printf ("2\n");
        }else if ( a * a + b * b == c * c || a * a + c * c == b * b || b * a + c * c == a * a) {
            printf("3\n");
        }else {
            printf("4\n");
        }
    }else {
        printf("INVALID\n");
    }
}