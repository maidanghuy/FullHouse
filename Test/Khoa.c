#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

    long long n;
    scanf("%lld", &n);

    n = llabs(n);

    char s[32];
    int index = 0;
    while( n != 0 ){
        char x = (n % 2) + 48;
        s[index++] = x;
        n /= 2;
    }
    
    for (int i = index; i < 32; i++){
        s[i] = 48;
    }

    //sao chép chuỗi và đổi ngược
    char res[32];
    for (int i = 0; i < 32; i++){
        res[31-i] = s[i];
    }

    int flag = 0;
    for (int i = 0; i < 32; i++){
        if(res[i] == '1'){
            flag = i;
        }
    }
    
    for (int i = 0; i < 32; i++){
        if (i < flag){
            if (res[i] == '1'){
                res[i]--;
            }else{
                res[i]++;
            }
        }
        printf("%c", res[i]);
    }
}
// 11111001010100010010001100001111
// 11111001010100010010001100001111