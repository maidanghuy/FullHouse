//https://laptrinh24h.vn/problem/fhc23b02
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[51];

    FILE *f = NULL;
    f = fopen("FH.txt", "r");
    if (f == NULL){
        printf("Failed to open file FH.txt\n");
    }else {
        fscanf(f, "%[^\n]s", s);
        printf("%s\n", s);
    }
    fclose(f);
    return 0;
}