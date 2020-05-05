// @prefix atcoder
// @description atcoder template

#include <bits/stdc++.h>
using namespace std;
#define int long long

// typedef
//------------------------------------------
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<PII> VP;

// rep
//------------------------------------------
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) (x).begin(), (x).end()
#define DEBUG(x) cerr << #x << ": " << x << '\n'
#define DEBUGP(x) cerr << #x << ": " << x.first << " \t" << x.second << '\n'

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int modinv(int a, int m) {
    int b = m, u = 1, v = 0;
    while (b) {
        int t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= m;
    if (u < 0)
        u += m;
    return u;
}

long long extGCD(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long d = extGCD(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

int a, b, n;

signed main() {
    cin >> a >> b >> n;

    int res = 0;

    if (b > n) {
        cout << (a * n) / b - a * (n / b) << endl;
        return 0;
    }
    if (b != 1) {
        int i = n / (b - 1);
        res = max((a * (i * (b - 1))) / b - a * ((b * i - 1) / b), res);
        i--;
        res = max((a * (i * (b - 1))) / b - a * ((b * i - 1) / b), res);
    } else {
        res = 0;
    }
    cout << res << endl;
    return 0;
}