//https://laptrinh24h.vn/problem/fhc19b05
#include <stdio.h>


char toupper(char s){
    if (s >= 'a' && s <= 'z') {
        s -= 32;
    }
    return s;
}

int main() {

    char s;
    scanf("%c", &s);

    s = toupper(s);

    printf("%c", s);
    return 0;
}