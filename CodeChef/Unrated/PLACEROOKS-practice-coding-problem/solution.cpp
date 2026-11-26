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
#define MOD 1000000007
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
    int n, m;
    cin >> n >> m;
    int best = -1, bh = 0, bv = 0, ba = 0;
    fo(v, 0, n / 2 + 1) {
        fo(h, 0, m / 2 + 1) {
            int a = min(n - h - 2 * v, m - 2 * h - v);
            if (a < 0) continue;
            int tot = a + 2 * h + 2 * v;
            if (tot > best) {
                best = tot;
                bh = h;
                bv = v;
                ba = a;
            }
        }
    }
    vs g(n, string(m, '.'));
    int r = 0, c = 0;
    fo(i, 0, ba) {
        g[r][c] = 'R';
        r++;
        c++;
    }
    fo(i, 0, bh) {
        g[r][c] = 'R';
        g[r][c + 1] = 'R';
        r++;
        c += 2;
    }
    fo(i, 0, bv) {
        g[r][c] = 'R';
        g[r + 1][c] = 'R';
        r += 2;
        c++;
    }
    print(best);
    foru(g) print(u);
}

int main() {
	op();
    // solve();
	test{solve();}
	return 0;
}
