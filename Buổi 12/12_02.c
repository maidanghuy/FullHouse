//https://laptrinh24h.vn/problem/fhc12b05
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max_1 = a[0];
    int max_2 = a[1];
    for (int i = 1; i < n; i++) {
        if (a[i] > max_1) {
            max_2 = max_1;
            max_1 = a[i];
        }else if (a[i] > max_2 && a[i] < max_1) {
            max_2 = a[i];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if ( a[i] < max_2) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}

// //https://laptrinh24h.vn/problem/fhc12b05
// # include <stdio.h>
// # include <math.h> 
// # include <stdbool.h>
// # include <string.h>


// void countFrequency(int arr[], int n) {
//     // Tim giá tri lon nhat trong mang de xac dinh kích thuoc cua mang tan suat
//     int max = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     // Tao mang tan suat voi kich thuoc là giá tri lon nhat trong mang + 1
//     int frequency[max + 1];
//     for (int i = 0; i <= max; i++) {
//         frequency[i] = 0;
//     }

//     // Ðem tan suat xuat hien cua cac phan tu trong mang
//     for (int i = 0; i < n; i++) {
//         frequency[arr[i]]++;
//     }

//     //In tan suat xuat hien cua các phan tu theo thu tu tu nho toi lon
//     for (int i = 0; i <= max; i++) {
//         if (frequency[i] != 0) {
//             printf("%d %d\n", i, frequency[i]);
//         }
//     }
    
//     printf("\n");
//     // int count = 0;
//     // for (int i = 0; i <= max; i++) {
//     //     if (frequency[i] != 0) {
//     //         count++;
//     //     }
//     // }
//     // printf("%d\n", count);
//     // In tan suat xuat hien cua cac phan tu theo thu tu xuat hien trong mang
//     for (int i = 0; i < n; i++) {
//         if (frequency[arr[i]] != 0) {
//             printf("%d %d\n", arr[i], frequency[arr[i]]);
//             frequency[arr[i]] = 0;  // Ðat tan suat cua phan tu do in thanh 0 de tranh in lai
//         }
//     }
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     countFrequency(arr, n);

//     return 0;
// }