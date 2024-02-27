//https://laptrinh24h.vn/problem/fhc15b04
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>


int _prime (int n) {
    if (n < 2) return 0;
    if (n < 4) return 1;
    if ( !(n % 2) || !(n % 3) ) return 0;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if ( !(n % i) || !(n % (i + 2)) ) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    int index = n - 1;
    for (int i = 0; i < n; i++){
        if ( _prime(a[i][i])){
            count++;
        }
        a[i][i] = 0;
        if ( _prime(a[i][index--])){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}