//https://laptrinh24h.vn/problem/fhc13b06
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

void _quickSort ( int a[], int left, int right ) {
    // Kiểm tra xem nếu mảng có 1 phần tử thì không cần sắp xếp
    if (left >= right) return;

    // Chọn phần tử chính giữa
    int pivot = a[(left + right) / 2];

    // i là vị trí đầu và j là cuối đoạn
    int i = left;
    int j = right;


    while ( i < j ) {
        // nếu giá trị tại a[i] lớn hơn pivot thì dừng
        while ( a[i] < pivot ) i++;

        //  nếu giá trị tại a[j] bé hơn pivot thì dừng
        while ( a[j] > pivot ) j--;

        // Sau khi kết thúc hai vòng while ở trên thì chắc chắn
        // vị trí A[i] phải lớn hơn pivot và A[j] phải nhỏ hơn pivot
        if ( i <= j ) {

            // nếu i != j (tức không trùng thì mới cần hoán đổi)
            if ( i < j ) {
                swap(&a[i], &a[j]);
            }
            i++;
            j--;
        }
    }
    // Gọi đệ quy sắp xếp dãy bên trái pivot
    _quickSort(a, left, j);

    // Gọi đệ quy sắp xếp dãy bên phải pivot
    _quickSort(a, i, right);
}

void quickSort ( int a[], int n ) {
    _quickSort(a, 0, n - 1);
}

int gondola(int a[], int left, int right, int x) {
    if (left >= right ) return 1;

    int i = left;
    int j = right;
    int count = 0;

    while (i <= j) {
        if (a[i] + a[j] > x) {
            count++;
            j--; 
        }else { 
            count++;
            j--;
            i++;
        }
    }
    return count;
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int a[n];
    _input(a, n);
    quickSort(a, n);

    printf("%d\n", gondola(a, 0, n - 1, x));

    return 0;
}