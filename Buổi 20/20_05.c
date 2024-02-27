#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
    char x[1000], y[1000];
    scanf("%s%s",x, y);
    
    if (strstr(x, y) != NULL){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}