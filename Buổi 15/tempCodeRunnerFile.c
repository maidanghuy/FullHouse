//https://laptrinh24h.vn/problem/fhc14b12
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

long long fibo[100];

void sinh_Fibo(){
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 100; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
int main() {
    int n;
    scanf("%d", &n);

    sinh_Fibo();
    long long a[n][n];
    int index = 0;

    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    while ( h1 <= h2 && c1 <= c2 ) {

        for (int i = c1; i <= c2; i++) {
            a[h1][i] = fibo[index++];
        }
        h1++;

        for (int i = h1; i <= h2; i++) {
            a[i][c2] = fibo[index++];
        }
        c2--;
        
        if ( h1 < h2) {
            for (int i = c2; i >= c1; i--) {
                a[h2][i] = fibo[index++];
            }
            h2--;
        }

        if ( c1 < c2 ) {
            for (int i = h2; i >= h1; i--) {
                a[i][c1] = fibo[index++];
            }
            c1++;
        }
    }
    
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < n; j++) {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
    return 0;

}