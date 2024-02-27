//https://laptrinh24h.vn/problem/fhc11b14
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int countMax = 0;
    int valueMax = a[0];
    for (int i = 0; i < n; i++){
        int countTemp = 0;
        for (int j = 0; j < n; j++){
            if (a[i] == a[j]){
                countTemp++;
            }
        }
        if (countTemp >= countMax){
            countMax = countTemp;
            valueMax = a[i];
        }
    }
    printf("%d %d\n",valueMax, countMax);
    return 0;
}