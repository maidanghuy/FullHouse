#include <stdio.h>
#include <stdlib.h>
void NhapMaTran(int **a, int x, int y) {
    int i, j;
    for (i = 0; i < x; i++)
        for (j = 0; j < y; j++) {
            //scanf("%d", &a[i][j]);
            scanf("%d", (*(a + i) + j));
    }
}

void XuatMaTran(int **a, int x, int y) {
    int i, j;
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++)
            printf("%d ", *(*(a + i) + j));
            //printf("%d ", a[i][j]);
            printf("\n");
    }
}
int main() {
    int x, y;
    int i;
    scanf("%d%d", &x,&y);

    int **a = (int **)malloc(x * sizeof(int *));

    for (i = 0; i < x; i++) {
        a[i] = (int *)malloc(y * sizeof(int)); 
    }

    NhapMaTran(a, x, y);
    XuatMaTran(a, x, y);

    for (i = 0; i < x; i++) {
       free(a[i]);
    }

    free(a);
    return 0;
}