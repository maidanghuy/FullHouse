#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d", &n);

    // Cấp phát mảng động
    int *b = (int *)malloc(n * sizeof(int));
    if (b == NULL){
        printf("Cap phat khong thanh cong!");
        exit(1);
    }

    // Nhập mảng động
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Xuất mảng động
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    
    // Cập nhật kích thước mảng động
    n = 20;
    b = (int *)realloc(b, n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    // Giải phóng bộ nhớ
    free(b);        // hoặc là realloc(b, 0);
    return 0;
}