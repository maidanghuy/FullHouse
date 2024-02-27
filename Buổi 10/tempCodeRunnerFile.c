// //https://laptrinh24h.vn/problem/fhc10b13
// #include <stdio.h>
// #include <math.h>

// long long sumOddNumber(long long n, long long result){
//     if (!n) return result;
//     long long temp = (n % 10) % 2 == 0 ? 0 : n % 10;
//     return sumOddNumber(n/10, result + temp);
// }
// long long sumEvenNumber(long long n, long long result){
//     if (!n) return result;
//     long long temp = (n % 10) % 2 == 0 ? n % 10 : 0;
//     return sumEvenNumber(n/10, result + temp);
// }
// int main()
// {
//     long long n;
//     scanf("%lld",&n);
//     printf("%lld\n%lld",sumEvenNumber(n, 0), sumOddNumber(n, 0));
//     return 0;
// }

//https://laptrinh24h.vn/problem/fhc10b13
#include <stdio.h>
#include <string.h>

int main(){
    char s[20];
    scanf("%s", s);
    
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < strlen(s); i++) {
        if ((s[i] - 48) % 2 == 0) {
            sumEven += (s[i] - 48);
        }else {
            sumOdd += (s[i] - 48);
        }
    }

    printf("%d\n%d\n", sumEven, sumOdd);
}