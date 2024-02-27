//https://laptrinh24h.vn/problem/fhc10b11
// #include <stdio.h>
// #include <math.h>

// //n là biến check giống n==0 thì dừng, res là biến đầu tiên với giá trị 0 để cộng số từ đuôi lên đầu của n;
// long long reverse(long long n, long long res){
//     if (!n) return res;
//     return reverse(n/10, res*10 + n%10);
// }
// long long countNumber(long long n){
//     if (n < 10) return 1;
//     return 1 + countNumber(n/10);
// }
// int main()
// {
//     long long n;
//     scanf("%lld",&n);
//     long long rev = reverse(n, 0);
//     int size = countNumber(n);
//     for (int i = 1; i <= size; i++){
//         printf ("%lld ",rev%10);
//         rev /= 10;
//     }
//     printf("\n");
//     for (int i = 1; i <= size; i++){
//         printf ("%lld ",n%10);
//         n /= 10;
//     }
//     return 0;
// }

#include <stdio.h>
#include <math.h>

void number_1(long long n) {
    if (n == 0) return;
    number_1(n / 10);
    printf("%lld ", n % 10);
}

void number_2(long long n) {
    if (n == 0) return;
    printf("%lld ", n % 10);
    number_2(n / 10);
}
int main()
{
    long long n;
    scanf("%lld",&n);
    number_1(n);
    printf("\n");
    number_2(n);
    return 0;
}