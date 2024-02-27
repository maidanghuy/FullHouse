//https://laptrinh24h.vn/problem/fhc12b08
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

void _input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void result( int a[], int b[], int n, int m, int res_1[], int res_2[] ) {

    int address_1 = 0;
    int address_2 = 0;
    int address_res_1 = 0;
    int address_res_2 = 0;

    while (address_res_1 <= n + m) {
        if ( address_1 >= n ) {
            //mảng 1 tới giới hạn nên chỉ cần chèn hết mảng 2
            res_1[address_res_1++] = b[address_2++];

        }else if ( address_2 >= m ) {
            //mảng 2 tới giới hạn nên chỉ cần chèn hết mảng 1
            res_1[address_res_1++] = a[address_1++] ;

        }else if ( a[address_1] < b[address_2] ){
            //nếu giá trị tại mảng 1 bé hơn mảng 2 thì ưu tiên chèn giá trị của mảng 1 trước
            res_1[address_res_1++] = a[address_1++] ;

        }else if ( a[address_1] > b[address_2] ) {
            //nếu giá trị tại mảng 2 bé hơn mảng 1 thì ưu tiên chèn giá trị của mảng 2 trước
            res_1[address_res_1++] = b[address_2++] ;

        }else if ( a[address_1] == b[address_2] ) {
            //cả 2 giá trị của 2 mảng bằng nhau thì mình chèn cả 2
            //chèn giá trị của 1 trong 2 mảng vào mảng giao
            res_2[address_res_2++] = a[address_1] ;
            res_1[address_res_1++] = a[address_1++] ;
            address_2++;

        }
    }

    for (int i = 0; i < address_res_1 - 1 - address_res_2; i++){
        printf("%d ", res_1[i]);
    }

    printf("\n");

    for (int i = 0; i < address_res_2; i++){
        printf("%d ", res_2[i]);
    }

}
// 10 10
// 7 12 15 22 35 42 49 56 63 70
// 18 35 42 50 63 72 80 91 105 112
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr_1[n];
    int arr_2[m];
    int res_1[n + m];

    int res_2[(int)fmax(n, m)];

    _input(arr_1, n);
    _input(arr_2, m);

    result(arr_1, arr_2, n, m, res_1, res_2);
    return 0;
}