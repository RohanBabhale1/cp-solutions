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
    vi a(n + 1), deg(n + 1, 0), vis(n + 1, 0), oncyc(n + 1, 0);
    vll p2(n + 1);
    p2[0] = 1;
    fo(i, 1, n + 1) p2[i] = p2[i - 1] * 2 % MOD;
    fo(i, 1, n + 1) {
        cin >> a[i];
        if (a[i] != i) deg[a[i]]++;
    }
    ll ans = 1;
    fo(i, 1, n + 1) {
        if (vis[i]) continue;
        vi path;
        int u = i;
        while (!vis[u]) {
            vis[u] = 1;
            path.pb(u);
            u = a[u];
        }
        if (vis[u] == 1 && a[u] != u) {
            int len = 0;
            bool out = false;
            int v = u;
            do {
                oncyc[v] = 1;
                len++;
                if (deg[v] > 1) out = true;
                v = a[v];
            } while (v != u);
            ll c = p2[len];
            if (!out) c = (c - 1 + MOD) % MOD;
            ans = ans * c % MOD;
        }
        foru(path) vis[u] = 2;
    }
    fo(i, 1, n + 1) {
        if (a[i] != i && !oncyc[i] && deg[i] > 0) ans = ans * 2 % MOD;
    }
    print(ans);
}

int main() {
	op();
    // solve();
	test{solve();}
	return 0;
}
