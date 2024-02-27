//https://laptrinh24h.vn/problem/fhc13b04
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

void bubbleSort(int a[], int n){
    int count = 1;
    while (count < n) {

        for (int i = 0; i < n - 1; i++) {
            if (a[i] < a[i + 1]) {
                swap(&a[i], &a[i + 1]);
            }
        } 

        printf("Buoc %d: ", count++);

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
    
    bubbleSort(a, n);
    return 0;
}