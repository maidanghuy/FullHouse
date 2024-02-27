//https://laptrinh24h.vn/problem/fhc14b12
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = 0; i < n; i++){
        swap(&a[x - 1][i], &a[y - 1][i]);
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    } 
    return 0;

}