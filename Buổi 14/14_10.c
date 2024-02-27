//https://laptrinh24h.vn/problem/fhc14b10
// # include <stdio.h>
// # include <math.h> 
// # include <stdbool.h>
// # include <string.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     long long a[n][n];
//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j < n; j++) {
//             scanf("%lld", &a[i][j]);
//         }

//     }
//     for (int i = n - 1; i >= 0; i--) {
//         for (int j = 0; j < n; j++) {
//             printf("%lld ", a[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;

// }

# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    long long a[n][n];
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {
            scanf("%lld", &a[i][j]);
        }

    }
    for (int i = 0; i < n; i++) {
        long long sum = 0;
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
        printf("%lld ", sum);
    }
    printf("\n");
    for (int i = 0; i < m; i++) {
        long long sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[j][i];
        }
        printf("%lld ", sum);
    }

    return 0;

}