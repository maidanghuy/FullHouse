//https://laptrinh24h.vn/problem/fhc14b11
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     long long a[n][n];
//     long long ans = 1;
//     int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
//     while ( h1 <= h2 && c1 <= c2 ) {

//         for (int i = c1; i <= c2; i++) {
//             a[h1][i] = ans++;
//         }
//         h1++;

//         for (int i = h1; i <= h2; i++) {
//             a[i][c2] = ans++;
//         }
//         c2--;
        
//         if ( h1 < h2) {
//             for (int i = c2; i >= c1; i--) {
//                 a[h2][i] = ans++;
//             }
//             h2--;
//         }

//         if ( c1 < c2 ) {
//             for (int i = h2; i >= h1; i--) {
//                 a[i][c1] = ans++;
//             }
//             c1++;
//         }
//     }
    
    // for (int i = 0; i < n; i++ ) {
    //     for (int j = 0; j < n; j++) {
    //         printf("%lld ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    // return 0;

// }

int main() {
    int n;
    scanf("%d", &n);
    
    long long tmp = 1;
    long long a[n][n];
    
    for (int i = 0; i <= n / 2; i++) {

        for (int j = i; j <= n - i - 1; j++) a[i][j] = tmp++;

        for (int j = i + 1; j <= n - i - 1; j++) a[j][n - i - 1] = tmp++;

        for (int j = n - i - 2; j >= i; j--) a[n - i - 1][j] = tmp++;

        for (int j = n - i - 2; j >= i + 1; j--) a[j][i] = tmp++;
    }

    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < n; j++) {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}