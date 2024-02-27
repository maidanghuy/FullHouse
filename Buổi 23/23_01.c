//https://laptrinh24h.vn/problem/fhc23b01
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[51];
    scanf(" %[^\n]s", s);

    FILE *f = NULL;
    f = fopen("FH.txt", "w");
    fprintf(f, "%s\n", s);
    fclose(f);
    
    f = NULL;
    f = fopen("FH.txt", "r");
    if (f == NULL){
        printf("Failed to open file FH.txt\n");
    }else {
        fscanf(f, " %[^\n]s", s);

        if (strlen(s) == 0){
            printf("File empty!");
        }else {
            printf("%s\n", s);
        }
    }
    fclose(f);
    return 0;
}   