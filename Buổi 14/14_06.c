//https://laptrinh24h.vn/problem/fhc14b06
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

int _reverse(int n){
    int tmp = n;
    int res = 0;
    while (n) {
        int x = n % 10;
        res = res * 10 + x;
        n /= 10;
    }

    return res == tmp;
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
    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {
            if (_reverse(a[i][j])) count ++;
        }

    }
    printf("%d\n", count);
    return 0;
}