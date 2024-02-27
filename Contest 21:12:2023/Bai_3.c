//https://laptrinh24h.vn/problem/tansuatarr
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

void swap (long long *a, long long *b) {
    long long tmp = *a;
    *a = *b;
    *b = tmp;
}

void _quickSort (long long a[], int left, int right) {
    if (left >= right) return;

    long long pivot = a[(left + right) / 2];

    int i = left;
    int j = right;

    while (i < j) {

        while (a[i] < pivot) i++;

        while (a[j] > pivot) j--;

        if (i <= j) {
            if (i < j) {
                swap (&a[i], &a[j]);
            }
            i++;
            j--;
        }

    }

    _quickSort(a, left, j);
    _quickSort (a, i, right);

}

void QuickSort (long long a[], int n) {

    _quickSort (a, 0, n - 1);

}
int main() {

    int n;
    scanf("%d", &n);

    long long a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    QuickSort(a, n);
    int count = 1;
    for (int i = 1; i <= n; i++) {
        if (a[i] == a[i - 1]) {
            count++;
        }else{
            printf("%lld %d\n", a[i - 1], count);
            count = 1;
        }
    }
    return 0;
}
