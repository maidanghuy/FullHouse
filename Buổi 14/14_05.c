//https://laptrinh24h.vn/problem/fhc14b05
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[n][n];
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            scanf("%lld", &a[i][j]);
        }

    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            printf("%lld ", a[j][i]);
        }

        printf("\n");
        
    }
}