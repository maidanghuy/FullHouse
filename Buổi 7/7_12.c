#include <stdio.h>
#include <math.h>

int squareNumber (int n){
    return sqrt(n)==(int)sqrt(n);
}

int main(){
    int t, a, b;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        if ( a < b){
            int tmp = a;
            a = b;
            b = tmp;
        }
        int count = sqrt(a) - sqrt(b) + 1;
        printf("%d",count);
        if (t != 0) printf("\n");
    }
    return 0;
}