void output(int a[501][501], int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (isPrime(a[i][j])){
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
}