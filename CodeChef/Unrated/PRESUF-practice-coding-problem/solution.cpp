#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef set<int> si;
typedef set<char> sc;

#define fo(i,s,e) for(long long int i=s;i<e;i++)
#define foru(a) for(auto &u:a)
#define pb push_back
#define f first
#define s second
#define sp <<" "<<
#define MOD 998244353
#define PI 3.1415926535897932384626433832795
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define test int tc; cin>>tc; while(tc--)
#define print(a) {cout<<a<<endl; }
#define printv(a) {for(auto u:a) cout<<u<<" "; }
#define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

const double eps = 1e-9;

string to_upper(string a) {
    for (auto &c : a) c = toupper(c);
    return a;
}

string to_lower(string a) {
    for (auto &c : a) c = tolower(c);
    return a;
}

bool prime(ll a) {
    if (a < 2) return 0;
    for (ll i = 2; i <= a / i; ++i)
        if (a % i == 0) return 0;
    return 1;
}

vector<bool> sieve(int n) {
    vector<bool> p(n + 1, 1);
    p[0] = 0;
    if (n >= 1) p[1] = 0;
    for (ll i = 2; i * i <= n; i++) {
        if (p[i]) {
            for (ll j = i * i; j <= n; j += i) {
                p[j] = 0;
            }
        }
    }
    return p;
}

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

void solve() {
    int n;
    cin >> n;
    vi a(n);
    foru(a) cin >> u;
    vi x(n), y(n);
    map<int, int> m;
    fo(i, 0, n) {
        m[a[i]]++;
        x[i] = m[a[i]] - (int)m.size() / 2;
    }
    m.clear();
    for (int j = n - 1; j >= 0; j--) {
        m[a[j]]++;
        y[j] = (int)m.size() / 2 - m[a[j]];
    }
    int off = n + 1, sz = 2 * n + 5;
    vll bit(sz + 1, 0);
    ll ans = 0;
    fo(j, 0, n) {
        for (int k = y[j] + off; k > 0; k -= k & -k) ans += bit[k];
        for (int k = x[j] + off; k <= sz; k += k & -k) bit[k]++;
    }
    print(ans % MOD);
}

int main() {
	op();
    solve();
	// test{solve();}
	return 0;
}
