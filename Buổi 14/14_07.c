//https://laptrinh24h.vn/problem/fhc14b07
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>


int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    long long max = 0;
    int hang = 0;
    int cot = 0;
    
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        long long sum_hang = 0;
        for (int j = 0; j < m; j++) {
            sum_hang += a[i][j];
        }
        if (sum_hang > max) {
            max = sum_hang;
            hang = i;
        }
    }

    max = 0;
    for (int i = 0; i < m; i++) {
        long long sum_cot = 0;
        for (int j = 0; j < n; j++) {
            sum_cot += a[j][i];
        }
        if (sum_cot > max) {
            max = sum_cot;
            cot = i;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ( i != hang && j != cot) {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}