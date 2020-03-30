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

long double p;

bool isOK(long double x){
    return ((long double)1.0 - (long double)2.0 / (long double)3.0 * log((long double)2.0) * p * pow((long double)2.0, - x * 2.0 / 3.0)) >= (long double)0.0;
}

signed main()
{
    cin >> p;

    long double left = 0.0;
    long double right = p + 1.0;
    const long double eps = 1e-8;
    int cnt = 0;

    while (right - left > eps && left < p && cnt < 100000){
        long double mid = left + (right - left) / (long double)2.0;
        if (isOK(mid)){
            right = mid;
        } else {
            left = mid;
        }
        cnt++;
    }

    if (right > p) {
        cout << fixed << setprecision(10) << p << endl;
    } else {
        cout << fixed << setprecision(10) << right + p * pow(2.0, - right * 2.0 / 3.0) << endl;
    }
    return 0;
}