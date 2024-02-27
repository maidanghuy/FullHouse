#include <stdio.h>

void output (int n){
    for (int i=1; i<=n; i++){
        for (int j=n; j>i; j--){
            printf("~");
        }
        for (int i=1; i<=n; i++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);

    output(n);

    return 0;
}