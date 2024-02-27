//https://laptrinh24h.vn/problem/fhc12b01
#include <stdio.h>
#include <math.h>

void _sort( int a[], int n ) {
    for(int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if ( a[i] > a[j] ) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

}

void swap( int *a, int *b ){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void _quicksort ( int a[], int left, int right ) {
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
    _quicksort(a, left, j);

    // Gọi đệ quy sắp xếp dãy bên phải pivot
    _quicksort(a, i, right);
}

void quicksort ( int a[], int n ) {
    _quicksort(a, 0, n - 1);
}

int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    quicksort(a, n);
    printf("%d %d %d\n", a[n - 1], a[n - 2], a[n - 3] );
    return 0;
}