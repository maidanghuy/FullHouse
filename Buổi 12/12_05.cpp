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

#include <iostream>
#include <map>

using namespace std;

int main() {
    // Khởi tạo mảng
    int n;  cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Tạo một map để đếm tần suất
    map<int, int> frequencyMap;

    // Duyệt qua mảng và đếm tần suất
    for (auto i : arr) {

        // Nếu phần tử đã tồn tại trong map, tăng giá trị tần suất lên 1
        // Nếu chưa tồn tại, thêm một i mới với tần suất là 1

        frequencyMap[i]++;
    }

    // Hiển thị kết quả
    
    for (auto i : frequencyMap) 
        cout << i.first << " " << i.second << endl;
    cout << endl;

    for (auto i : arr){
        if (frequencyMap[i] != 0){
            cout << i << " " << frequencyMap[i] << endl;
        }
        frequencyMap[i] = 0;
    }
    return 0;
}