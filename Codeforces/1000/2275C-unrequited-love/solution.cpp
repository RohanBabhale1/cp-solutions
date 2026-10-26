#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <numeric>
#include <queue>
#include <stack>
#include <iomanip>
#include <array>
#include <functional>
#include <bitset>
using namespace std;

void baseIO(string s = "") {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if (s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int subcount = 219;

#define ll long long
#define db long double
#define all(x) (x).begin(), (x).end()

int main() {
    baseIO();
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        int m = n - 4;     
        vector<ll> val(m + 1);
        unordered_map<ll, ll> freq;

        for (int x = 1; x <= m; x++) {
            val[x] = a[x] + a[x + 2] - a[x + 4];
            freq[val[x]]++;
        }

        long long tl = 0;
        for (auto &p : freq) {
            ll c = p.second;
            tl += c * (c - 1) / 2;  
        }

        long long bd = 0;
        for (int x = 1; x <= m; x++) {
            if (x + 2 <= m && val[x] == val[x + 2]) bd++;  
            if (x + 4 <= m && val[x] == val[x + 4]) bd++;  
        }

        cout << tl - bd << '\n';
    }

    return 0;
}
