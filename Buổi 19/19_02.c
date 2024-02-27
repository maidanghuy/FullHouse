//https://laptrinh24h.vn/problem/fhc19b02
#include <stdio.h>
#include <math.h> 
#include <stdbool.h>

int strlen(char s[]){
    int cnt = 0;
    while (s[cnt] != '\0') {
        cnt++;
    }
    return cnt;
}


void strlwr(char s[]){
    int len = strlen(s);
    for (int i = 0; i < len; i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
}

int main() {

    char c[1000];
    fgets(c, sizeof(c), stdin);
    strlwr(c);
    printf("%s", c);
    return 0;
}