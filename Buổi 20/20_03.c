//https://laptrinh24h.vn/problem/fhc20b02
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strlwr(char s[]){
    int len = strlen(s);
    for (int i = 0; i < len; i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
}

int main() {

    char s[1000];
    fgets(s, sizeof(s), stdin);

    char a[100][100];
    int idx = 0;

    char* token = strtok(s, "/");
    while(token != NULL){

        strcpy(a[idx++], token);
        token = strtok(NULL, "/");

    }
    for(int i = 0; i < idx - 1; i++){

        if(strlen(a[i]) < 2){
            printf("0%s/", a[i]);
        }else {
            printf("%s/", a[i]);
        }
        
    }

    printf("%s", a[idx - 1]);
    return 0;
}