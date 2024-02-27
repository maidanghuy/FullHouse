//https://laptrinh24h.vn/problem/fhc19b11
#include <stdio.h>

int strlen(char s[]){
    int cnt = 0;
    while(s[cnt] != '\0') cnt++;
    
    return cnt;
}

int main(){
    char s[1000];
    fgets(s, 1000, stdin);

    printf("%d", strlen(s) - 1);
}