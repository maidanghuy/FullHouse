#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void input (int a[][501], int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

bool isPrime (int n){
    if (n<2) return false;
    if (n<4) return true;
    if (n%2==0 || n%3==0) return false;

    for (int i=5; i<=sqrt(n); i+=6){
        if (n%i==0 || n%(i+2)==0) return false;
    }

    return true;
}

void output (int a[][501], int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (isPrime(a[i][j])){
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int a[501][501];
    input(a, n, m);

    output(a, n, m);
    return 0;
}