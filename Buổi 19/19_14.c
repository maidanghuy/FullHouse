//https://laptrinh24h.vn/problem/fhc19b14
#include <stdio.h>
#include <string.h>

void maxcount(char s[]){
    int len = strlen(s);
    int a[123] = {0};
    for (int i = 0; i < len; i++){
        a[s[i]]++;
    }
    int max = 0;
    int index = 0;
    for (int i = 65; i <= 122; i++){
        if (a[i] >= max){
            max = a[i];
            index = i;
        }
    }
    
    printf("%c %d\n", index, max);
}

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    maxcount(s);
    return 0;
}
