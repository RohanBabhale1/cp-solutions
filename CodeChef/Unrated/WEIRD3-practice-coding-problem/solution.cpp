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
    vi a(n + 1), st(n + 1, 0), cl(n + 1, 0), dep(n + 1, 0);
    fo(i, 1, n + 1) cin >> a[i];
    ll ans = 1;
    fo(i, 1, n + 1) {
        if (st[i]) continue;
        vi path;
        int x = i;
        while (!st[x]) {
            st[x] = 1;
            path.pb(x);
            x = a[x];
        }
        if (st[x] == 1) {
            int len = 1, y = a[x];
            while (y != x) {
                len++;
                y = a[y];
            }
            cl[x] = len;
            y = a[x];
            while (y != x) {
                cl[y] = len;
                y = a[y];
            }
            fo(j, 0, len - 1) ans = ans * (len + 1) % MOD;
        }
        for (int v : path) st[v] = 2;
    }
    fo(i, 1, n + 1) {
        if (cl[i]) continue;
        vi path;
        int x = i;
        while (!cl[x]) {
            path.pb(x);
            x = a[x];
        }
        for (int j = (int)path.size() - 1; j >= 0; j--) {
            int v = path[j];
            cl[v] = cl[a[v]];
            dep[v] = dep[a[v]] + 1;
        }
    }
    fo(i, 1, n + 1) {
        if (dep[i] > 0) ans = ans * (dep[i] - 1 + cl[i]) % MOD;
    }
    print(ans);
}

int main() {
	op();
    // solve();
	test{solve();}
	return 0;
}
