//https://laptrinh24h.vn/problem/fhc19b07
#include <stdio.h>


int checkChar(char c){
    if (c >= 'a' && c <= 'z') return 1;
    return 0;
}

int main() {

    char s;
    scanf("%c", &s);

    printf("%d", checkChar(s));
    return 0;
}