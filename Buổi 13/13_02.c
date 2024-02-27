//https://laptrinh24h.vn/problem/fhc13b02
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

void _input( int a[], int n ){
    for ( int i = 0; i < n; i++ ) {
        scanf("%d", &a[i]);
    }
}

void swap( int *a, int *b ){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void interchangeSort(int a[], int n) {

    for (int i = 0; i < n - 1; i++) {

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                swap(&a[i], &a[j]);
            }
        }
        printf("Buoc %d: ", i + 1);

        for (int j = 0; j < n; j++) {
            printf("%d ", a[j]);
        }

        printf("\n");
    }

}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    _input(a, n);
    
    interchangeSort(a, n);
    return 0;
}