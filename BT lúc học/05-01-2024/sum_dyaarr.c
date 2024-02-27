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
        scanf("%d", b + i);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += b[i];
    }

    printf("%d\n", sum);
    free(b);
    return 0;
}