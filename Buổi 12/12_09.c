//https://laptrinh24h.vn/problem/fhc12b09
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

void _input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}


void result(int arr_1[], int arr_2[], int arr_3[], int a, int b, int c) {

    int address_1 = 0;
    int address_2 = 0;
    int address_3 = 0;
    int count = 0;

    while( address_1 < a && address_2 < b && address_3 < c ) {

        if ( arr_1[address_1] == arr_2[address_2] && arr_2[address_2] == arr_3[address_3] ) {
            printf("%d ", arr_1[address_1]);
            address_1++;
            address_2++;
            address_3++;
            count = 1;
        }

        while ( arr_1[address_1] < arr_2[address_2] ) {
            address_1++;
        }
        while ( arr_2[address_2] < arr_3[address_3] ) {
            address_2++;
        }
        while ( arr_3[address_3] < arr_1[address_1] ) {
            address_3++;
        }

    }

    if ( !count ) printf("-1");
    printf("\n");
}


int main() {
    int test;
    scanf("%d", &test);

    while (test--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int arr_1[a];
        int arr_2[b];
        int arr_3[c];

        _input(arr_1, a);
        _input(arr_2, b);
        _input(arr_3, c);

        result(arr_1, arr_2, arr_3, a, b, c);
    }

    return 0;
}

// //https://laptrinh24h.vn/problem/fhc12b09
// # include <stdio.h>
// # include <math.h> 
// # include <stdbool.h>
// # include <string.h>

// void _input(long long a[], int n) {
//     for (int i = 0; i < n; i++) {
//         scanf("%lld", &a[i]);
//     }
// }


// void result(long long arr_1[], long long arr_2[], long long arr_3[], int a, int b, int c) {

//     int address_1 = 0;
//     int address_2 = 0;
//     long long res_temp[a + b + 1];
//     int address_temp = 0;

//     while (address_1 < a && address_2 < b) {
//         if (arr_1[address_1] < arr_2[address_2]) {
//             address_1++;
//         } else if (arr_1[address_1] > arr_2[address_2]) {
//             address_2++;
//         } else {
//             res_temp[address_temp++] = arr_1[address_1];
//             address_1++;
//             address_2++;
//         }
//     }
//     if ( address_temp == 0 ) {
//         printf("-1\n");
//     }else {
//         long long res[address_temp + 1];
//         int address_res = 0;

//         for (int i = 0; i < address_temp; i++) {
//             for (int j = 0; j < c; j++) {
//                 if (res_temp[i] == arr_3[j]) {
//                     res[address_res++] = res_temp[i];
//                     break; // Nếu đã tìm thấy thì thoát khỏi vòng lặp
//                 }
//             }
//         }

//         if (address_res == 0) {
//             printf("-1\n");
//         } else {
//             for (int i = 0; i < address_res; i++) {
//                 printf("%lld ", res[i]);
//             }
//             printf("\n");
//         }
//     }
// }


// int main() {
//     int test;
//     scanf("%d", &test);

//     while (test--) {
//         int a, b, c;
//         scanf("%d %d %d", &a, &b, &c);

//         long long arr_1[a];
//         long long arr_2[b];
//         long long arr_3[c];

//         _input(arr_1, a);
//         _input(arr_2, b);
//         _input(arr_3, c);

//         result(arr_1, arr_2, arr_3, a, b, c);
//     }

//     return 0;
// }