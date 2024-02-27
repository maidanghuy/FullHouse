//https://laptrinh24h.vn/problem/subarr
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

int main() {

    int n;
    scanf("%d", &n);

    long long sum = 0;
    long long sum_max = 0;
    long long a[n];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        sum_max += a[i];            //tính tổng toàn bộ phần tử trong mảng
    }


    for (int i = 0; i < n; i++) {

        sum += a[i];            //tính tổng các phần tử từ đầu tới cuối

        sum_max = fmax(sum, sum_max);           //nếu có tổng nào lớn hơn tổng của toàn bộ mảng thì nó là tổng lớn nhất
        if (sum < 0) sum = 0;           // nếu tổng đó là số âm thì reset, vì không cần lấy nó

    }
    printf("%lld\n", sum_max);
    return 0;
}
