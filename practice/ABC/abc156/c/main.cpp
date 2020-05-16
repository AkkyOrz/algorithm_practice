// @prefix atcoder
// @description atcoder template

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF 1e10

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

int n;
VI x(101);

signed main()
{
	cin >> n;
	x.resize(n);
	REP(i, n) {
		cin >> x[i];
	}
	sort(ALL(x));
	int mi = INF;
	FOR(p,1, x.back()+1){
		int cnt = 0;
		REP(i, n){
			cnt += (p - x[i]) * (p - x[i]);
		}
		mi = min(mi, cnt);
	}

	cout << mi << endl;
	return 0;
}
