//https://laptrinh24h.vn/problem/fhc20b10
#include <stdio.h>

int main(){
    char s[1000];
    scanf("%s", s);
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++){
        sum += s[i] - 48;
    }
    if (sum % 3 == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
}