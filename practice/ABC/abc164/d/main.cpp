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

int modpow(int a, int n, int mod) {
    int res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

string s;

signed main()
{
	cin >> s;

	int res = 0;
	int now = 0;
	map<int, int> mp;
	mp[0] = 1;

	REP(i, s.size()){
		now += modpow(10, i, 2019) * (s[s.size()-1-i] - '0');
		now %= 2019;
		mp[now]++;
	}

	for (auto m : mp){
		res += (m.second) * (m.second - 1) / 2;
		DEBUGP(m);
    }
	cout << res << endl;


	return 0;
}
