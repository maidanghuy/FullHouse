//https://laptrinh24h.vn/problem/fhc19b09
#include <stdio.h>


int checkNumber(char c){
    if (c >= 48 && c <= 57) return 1;
    return 0;
}

int main() {

    char s;
    scanf("%c", &s);

    printf("%d", checkNumber(s));
    return 0;
}