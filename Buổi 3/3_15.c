//https://laptrinh24h.vn/problem/fhc03b15
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int t;
    scanf("%d", &t);
    int Mishka = 0;
    int Chris = 0;
    int countMishka = 0;
    int countChris = 0;
    while (t--) {
        scanf("%d %d", &Mishka, &Chris);
        if ( Mishka > Chris ) {
            countMishka++;
        }else if (Chris > Mishka) {
            countChris++;
        }
    }
    if (countMishka > countChris) {
        printf("Mishka\n");
    }else if (countMishka < countChris) {
        printf("Chris\n");
    }else {
        printf("Friendship is magic! ^^\n");
    }
    return 0;
}