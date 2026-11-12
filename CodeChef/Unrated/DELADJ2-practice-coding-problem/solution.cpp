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
    vi a(n + 1), z(n + 1), nx(n + 2), st(n + 2);
    vll P(n + 1), S(n + 2);
    fo(i, 1, n + 1) cin >> a[i];
    ll ans = 0;
    fo(len, 1, n + 1) if (len % 2) ans += (ll)(n - len + 1) * 100;
    fo(v, 1, 101) {
        ll zs = 0, mx = 0;
        fo(i, 1, n + 1) {
            z[i] = a[i] < v;
            zs += (ll)z[i] * i * (n - i + 1);
        }
        fo(c, 0, 2) {
            P[0] = 0;
            fo(i, 1, n + 1) P[i] = P[i - 1] + z[i] - ((i % 2) != c);
            int top = 0;
            S[n + 1] = 0;
            for (int l = n; l >= 0; l--) {
                while (top > 0 && P[st[top - 1]] <= P[l]) top--;
                int j = top ? st[top - 1] : n + 1;
                S[l] = P[l] * (j - l) + S[j];
                st[top++] = l;
                if ((l + 1) % 2 == c && l < n) mx += (S[l] - P[l]) - (ll)(n - l) * P[l];
            }
        }
        ans += zs - 2 * mx;
    }
    print(ans);
}

int main() {
	op();
    // solve();
	test{solve();}
	return 0;
}
