#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        cout << 2* (k-1) + (1LL << (n - k + 1)) << '\n';
    }
    return 0;
}
