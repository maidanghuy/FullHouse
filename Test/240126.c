#include <stdio.h>
#include <stdlib.h>

int main(){
    int d, m, y;
    char _;
    char s[100];
    char day[100];
    FILE *f = NULL;
    f = fopen("hihi.txt", "r");

    if (f==NULL){
        printf("Loi roi");
        exit(1);
    }
    
    fgets(day, sizeof(day), f);
    fgets(s, sizeof(s), f);
    
    printf("%s\n%s", day, s);
    fclose(f);
}