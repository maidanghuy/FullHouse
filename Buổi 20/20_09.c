//https://laptrinh24h.vn/problem/fhc20b09
#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    scanf("%s", s);

    if ((s[strlen(s) - 1] - 48) % 2 == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}