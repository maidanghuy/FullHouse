//https://laptrinh24h.vn/problem/fhc19b13
#include <stdio.h>
#include <string.h>

void count(char s[]){
    int len = strlen(s) - 1;
    int a[123] = {0};

    for (int i = 0; i < len; i++){
        a[s[i]]++;
    }

    for (int i = 0; i < 123; i++){
        if (a[i] != 0){
            printf("%c %d\n", i, a[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < len; i++){
        if (a[s[i]] != 0){
            printf("%c %d\n", s[i], a[s[i]]);
            a[s[i]] = 0;
        }
    }
}

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    count(s);
    return 0;
}
