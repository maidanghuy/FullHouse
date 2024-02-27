#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for (int i=0; i<n; ++i){
        scanf("%d",&a[i]);
    }
    int x;
    printf("So muon them: ");
    scanf("%d",&x);
    for (int i=n-1; i>=0; i--){
        // printf("%d ",i);
        if (a[i] > x){
            a[i+1]=a[i];
            if (i==0){
                a[i]=x;
            }
        }else {
            a[i+1]=x;
            break;
        }
    }
    for (int i=0; i<=n; ++i){
        printf("%d ", a[i]);
    }
}