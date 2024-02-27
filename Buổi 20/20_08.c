//https://laptrinh24h.vn/problem/fhc20b08
#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    scanf("%s", s);

    for (int i = 0; s[i + 1] != '\0'; i++){
        if (s[i] - 48 > s[i + 1] - 48){
            printf("NO\n");
            return  0;
        }
    }
    printf("YES\n");
}