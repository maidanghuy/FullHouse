//https://laptrinh24h.vn/problem/fhc13b01
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

void selectionSort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {;
        int index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[index] ) {
                index = j;
            }
        }
        swap(&a[i], &a[index]);

        printf("Buoc %d: ",i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
}
int main() {
    // int n;
    // scanf("%d", &n);

    // int a[n];
    // _input(a, n);
    // selectionSort(a, n);
    int a = 100, b = 10;
    a = b = a;
    printf("a: %d, b: %d\n", a, b);
    return 0;
}