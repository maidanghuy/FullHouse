//https://laptrinh24h.vn/problem/fhc19b04
#include <stdio.h>


char tolower(char s){
    if (s >= 'A' && s <= 'Z') {
        s += 32;
    }
    return s;
}

int main() {

    char s;
    scanf("%c", &s);

    s = tolower(s);

    printf("%c", s);
    return 0;
}