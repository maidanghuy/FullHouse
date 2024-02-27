//https://laptrinh24h.vn/problem/fhc20b02
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int check(char s[]){
    int len = strlen(s) - 1;

    for (int i = 0; i < len; i++){
        if (s[i] != s[len - i]) return 0;
    }

    return 1;
}

void chuyen_hoa(char s[]){
    s[0] = toupper(s[0]);
    int len = strlen(s);
    for (int i = 1; i < len; i++){
        s[i] = tolower(s[i]);
    }
}

int main() {

    int n;
    scanf("%d", &n);
    getchar();
    while(n--){
        char s[1000];
        fgets(s, 1000, stdin);

        char a[100][100];
        int idx = 0;
        char* token = strtok(s, " \n");

        while (token != NULL){
            strcpy(a[idx++], token);
            token = strtok(NULL, " \n");
        }
        
        for (int i = 0; i < idx; i++){
            chuyen_hoa(a[i]);
            printf("%s ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
