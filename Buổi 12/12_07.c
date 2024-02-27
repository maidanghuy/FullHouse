//https://laptrinh24h.vn/problem/fhc12b07
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

void _input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void result( int a[], int b[], int n, int m, int res[]) {
    int address_1 = 0;
    int address_2 = 0;
    int address_res = 0;
    while (address_res <= n + m) {
        if ( address_1 >= n ) {
            res[address_res++] = b[address_2++] ;
            // address_res++;
            // address_2++;
        }else if ( address_2 >= m ) {
            res[address_res++] = a[address_1++] ;
            // address_res++;
            // address_1++;
        }else if ( a[address_1] < b[address_2] ){
            res[address_res++] = a[address_1++] ;
            // address_res++;
            // address_1++;
        }else if ( a[address_1] > b[address_2] ) {
            res[address_res++] = b[address_2++] ;
            // address_res++;
            // address_2++;
        }else if ( a[address_1] == b[address_2] ) {
            res[address_res++] = a[address_1++] ;
            // address_res++;
            // address_1++;
            res[address_res++] = b[address_2++] ;
            // address_res++;
            // address_2++;
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr_1[n];
    int arr_2[m];
    int res[n + m];

    _input(arr_1, n);
    _input(arr_2, m);

    result(arr_1, arr_2, n, m, res);
    
    for (int i = 0; i < n + m; i++){
        printf("%d ", res[i]);
    }
    
    return 0;
}