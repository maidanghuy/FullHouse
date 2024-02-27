#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int len = n * n;
    
    multiset<long long> mse;
    while (len--) {
        long long x; cin >> x;
        mse.insert(x);
    }

    int count = 0;
    for (auto i : mse) {
        cout << i << ' ';
        count++;
        if (count == n){
            cout << endl;
            count = 0;
        }
    }
}