//https://laptrinh24h.vn/problem/fhc13b05
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

void swap( int *a, int *b ){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void _input( int a[], int n ){
    for ( int i = 0; i < n; i++ ) {
        scanf("%d", &a[i]);
    }
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

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n], b[m];
    _input(a, n);
    _input(b, m);

    quicksort(a, n);
    quicksort(b, m);

    int index_1 = 0;
    int index_2 = 0;
    int count = 0;

    while (1) {

        //khi nam bé hơn hoặc bằng nữ thì sẽ tăng i lên kiểm tra bạn nam tiếp theo
        while( a[index_1] <= b[index_2] ) {
            index_1++;
        }
        //sau khi thoát ra while thì chắc chắc bạn nam sẽ cao hơn bạn nữ nên được 1 cặp
        //nhưng index_1 trong lúc cộng sẽ có thể vượt qua số lượng bạn nam nên phải kiểm tra để thoát ra
        if ( index_1 >= n || index_2 >= m ) {
            break;
        }
        a[index_1] = 0;
        count++;
        index_2++;
    }
    
    printf("%d\n", count);
    return 0;
}