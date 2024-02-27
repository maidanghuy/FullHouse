//https://laptrinh24h.vn/problem/fhc14b14
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

void input(int a[51][51], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void sum_Arr(int a[51][51], int b[51][51], int n, int m) {
    long long c[51][51];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = 1ll * a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }
}
int main() {

    int n, m;
    scanf("%d %d", &n, &m);
    
    int a[51][51];
    input(a, n, m);

    int b[51][51];
    input(b, n, m);

    sum_Arr(a, b, n, m);
    return 0;
}