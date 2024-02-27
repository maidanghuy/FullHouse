//https://laptrinh24h.vn/problem/fhc15b04
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>


void swap (int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void _quickSort(int a[], int left, int right){
    if (left >= right) return;

    int pivot = a[(left + right) / 2];

    int i = left;
    int j = right;

    while (i <= j){

        while (a[i] < pivot) i++;
        
        while (a[j] > pivot) j--;

        if (i <= j) {
            if (i < j){
                swap (&a[i], &a[j]);
            }
            i++;
            j--;
        }

    }

    _quickSort(a, left, j);

    _quickSort(a, i, right);
}

void QuickSort(int a[], int len){
    _quickSort(a, 0, len - 1);
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
    int tmp[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tmp[j] = a[i][j];
        }
        QuickSort(tmp, n);
        for(int j = 0; j < n; j++) {
            a[i][j] = tmp[j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}