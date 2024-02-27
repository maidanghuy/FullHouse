//https://laptrinh24h.vn/problem/distarr
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    set <long long> se;
    while (n--) {
        long long x; cin >> x;
        se.insert(x);
    }
    cout << se.size() << endl;
    return 0;
}
