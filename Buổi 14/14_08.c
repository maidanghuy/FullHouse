//https://laptrinh24h.vn/problem/fhc14b08
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
    printf("\n");
    for (int j = 0; j < n; j++){
        for (int i = n - 1; i >= 0; i--) {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
    return 0;

}