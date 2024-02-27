//https://laptrinh24h.vn/problem/fhc19b16
#include <stdio.h>
#include <string.h>

int check(char s[]){
    int len = strlen(s) - 1;

    for (int i = 0; i < len; i++){
        if (s[i] != s[len - i]) return 0;
    }

    return 1;
}

int main() {
    char s[1000];
    fgets(s, 1000, stdin);
    
    char a[1000][1000];
    int idx = 0;
    char* token = strtok(s, " \n");

    while (token != NULL){

        strcpy(a[idx++], token);
        token = strtok(NULL, " \n");

    }

    for (int i = 0; i < idx; i++){
        if (check(a[i]))    printf("%s ", a[i]);
    }
    
    return 0;
}
