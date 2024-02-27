//https://laptrinh24h.vn/problem/fhc10b01
// & * 
// | +
// xOR  1 0 -> 0
//      1 1 -> 1
//      0 0 -> 1
//      1 1 -> 0
// >> và <<; dịch sang phải và sang trái
// khi e dich phai k bit, n / 2^k
// khi e dich trai k bit, n * 2^k

#include <stdio.h>
#include <math.h>

int sumNumber(int n){
    if (n == 1) return 1;
    return n + sumNumber(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",sumNumber(n));
    return 0;
}