//https://laptrinh24h.vn/problem/fhc19b16
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    char* token = strtok(s, " \n");
    int cnt = 0;

    while (token != NULL){

        token = strtok(NULL, " \n");
        cnt++;

    }

    printf("%d", cnt);
    return 0;
}
