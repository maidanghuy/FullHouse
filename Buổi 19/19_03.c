//https://laptrinh24h.vn/problem/fhc19b03
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

char* strupr(char s[]){
    int len = strlen(s);
    for (int i = 0; i < len; i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }
    }
    return s;
}

int main() {

    char c[1000];
    fgets(c, sizeof(c), stdin);
    strupr(c);
    printf("%s", c);
    return 0;
}