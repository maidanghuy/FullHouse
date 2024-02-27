#include <stdio.h>

// Con trỏ là một biến lưu địa chỉ của một biến khac
// void *p, chấp mọi kiểu dữ liệu

int main() {
    int n = 100;
    int *p = &n;
    printf("Giá trị của n: %d\n", n);
    printf("Địa chỉ của n: %d\n", &n);
    printf("Giá trị tại đại chỉ %d là: %d\n", p, *p);
    *p += 100;
    printf("Giá trị mới của n: %d\n", *p);
    return 0;
}