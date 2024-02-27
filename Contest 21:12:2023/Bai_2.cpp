//https://laptrinh24h.vn/problem/tansuat
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector <long long> v;
    while (n--) {
        long long x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    int count = 1;
    int count_max = 1;
    long long value = v[0];
    long long value_max = v[0];

    // cout << v[0] << endl;
    for (int i = 1; i <= v.size(); i++) {
        if (v[i] == v[i - 1]) {
            count++;
            value = v[i - 1];
        }else {
            if (count >= count_max && value >= value_max) {
                count_max = count;
                value_max = value;
                // cout << count_max << value_max << endl;
            }
            count = 1;
        }
    }
    cout << value_max << endl;
    return 0;
}
//1 1 2 3 3