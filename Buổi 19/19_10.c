//https://laptrinh24h.vn/problem/fhc19b10
#include <stdio.h>
#include <string.h>

int checkChar(char c[]){
    int cnt = 0;
    for (int i = 0; i < strlen(c); i++) {
        if (c[i] >= 'a' && c[i] <= 'z' || c[i] >= 'A' && c[i] <= 'Z'){
            cnt++;
        }
    }
    return cnt;
}

int checkNumber(char c[]){
    int cnt = 0;
    for (int i = 0; i < strlen(c); i++){
        if (c[i] >= 48 && c[i] <= 57) {
            cnt++;
        }
    }
    return cnt;
}

int checkSpecial(char c[]){
    int cnt = 0;
    for (int i = 0; i < strlen(c); i++){
        if (c >= 48 && c <= 57) cnt++;
    }
    return cnt;
}

int main() {

    char s[1000];
    fgets(s, 1000, stdin);

    printf("%d %d %lu", checkChar(s), checkNumber(s), strlen(s) - 1 - checkChar(s) - checkNumber(s));
    return 0;
}