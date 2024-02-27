//https://laptrinh24h.vn/problem/fhc14b09
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
    int index = 0;
    long long sum_max = 0;
    for (int i = 0; i < n; i++) {
        long long sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[j][i];
        }
        if (sum > sum_max){
            sum_max = sum;
            index = i ;
        }
    }
    printf("%d\n", index + 1);
    for (int i = 0; i < n; i++) {
        printf("%lld ", a[i][index]);
    }
    return 0;

}