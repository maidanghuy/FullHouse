//https://laptrinh24h.vn/problem/fhc05b06
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int tmp = n;
    n = n * 2 - 1;


    int a[n][n];  
    for (int i = 0; i <= n / 2; i++) {

        for (int j = i; j <= n - i - 1; j++) a[i][j] = tmp;

        for (int j = i + 1; j <= n - i - 1; j++) a[j][n - i - 1] = tmp;

        for (int j = n - i - 2; j >= i; j--) a[n - i - 1][j] = tmp;

        for (int j = n - i - 2; j >= i + 1; j--) a[j][i] = tmp;

        tmp--;
    }

    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < n; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}