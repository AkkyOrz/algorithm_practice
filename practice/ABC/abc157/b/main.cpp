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

VVI v(3, VI(3));
bool check[3][3];
int n;
VI b(10);
signed main()
{
	REP(i, 3){
		REP(j, 3){
			cin >> v[i][j];
		}
	}
	cin >> n;
	b.resize(n);
	REP(i, n){
		cin >> b[i];
	}

	REP(i, 3){
		REP(j, 3){
			check[i][j] = false;
			REP(k, n){
				if (b[k] == check[i][j]) check[i][j] = true;
			}
		}
	}

	string s = "No";

	REP(i, 3){
		 if (check[i][0] && check[i][1] && check[i][2]) s = "Yes";
	}

	REP(i, 3){
		 if (check[0][i] && check[1][i] && check[2][i]) s = "Yes";
	}

	if (check[0][0] && check[1][1] && check[2][2]) s = "Yes";
	if (check[0][2] && check[1][1] && check[2][0]) s = "Yes";
	cout << s << endl;

	return 0;
}
