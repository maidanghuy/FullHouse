#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strlower(char s[]){
    for (int i = 0; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}

int main(){
    char s[1000];
    fgets(s, sizeof(s), stdin);

    char* token = strtok(s, " \n");

    char a[100][100];
    int idx = 0;

    while(token != NULL){
        strcpy(a[idx++], token);
        token = strtok(NULL, " \n");
    }

    strlower(a[idx - 1]);
    printf("%s",a[idx - 1]);
    
    for(int i = 0; i < idx - 1; i++){
        printf("%c",tolower(a[i][0]));
    }

    printf("@gmail.com");
}