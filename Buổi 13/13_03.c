//https://laptrinh24h.vn/problem/fhc13b03
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

void insertionSort(int a[], int n) {

    for (int i = 1; i < n; i++) {
        int temp = a[i];
        for (int j = 0; j < i; j++) {
            if (a[j] > a[i]) {
                for (int k = i; k >= j; k--) {
                    a[k] = a[k - 1];
                }
                a[j] = temp;
                break;
            }
        }
        printf("Buoc %d: ", i);

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
    
    insertionSort(a, n);
    return 0;
}