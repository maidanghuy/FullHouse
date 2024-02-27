#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[5];
    memset(a, 0, sizeof(a));
    for (int i=0; i<n; ++i){
        printf("%d ",*(a+i));
    }
}