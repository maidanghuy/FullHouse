//https://laptrinh24h.vn/problem/fhc20b06
#include <stdio.h>

int main(){
    char s[1000];
    scanf("%s", s);
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++){
        sum += s[i] - 48;
    }

    printf("%d\n", sum);
}