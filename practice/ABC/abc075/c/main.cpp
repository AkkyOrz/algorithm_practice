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

int n;
int m;

vector<bool> is_reached(51);

vector<vector<bool>> g(50, vector<bool>(50, false));
VI a, b;

void dfs(int v){
	is_reached[v] = true;

	REP(i, n){
		if (!g[v][i]) continue;
		if (is_reached[i]) continue;
		DEBUGP(make_pair(v, i));
		dfs(i);
	}
}

signed main()
{
	cin >> n >> m;

	REP(i, m){
		int x, y;
		cin >> x >> y;
		x--; y--;
		a.push_back(x);
		b.push_back(y);
		g[y][x] = true;
		g[x][y] = true;
	}

	int res = 0;

	REP(i, m){
		g[a[i]][b[i]] = false, g[b[i]][a[i]] = false;
		REP(j, n){ is_reached[j] = false; }
		dfs(0);
		bool flag = false;
		REP(j, n){
			if (is_reached[j] == false) flag = true;
		}
		if (flag) res++;
		g[a[i]][b[i]] = true, g[b[i]][a[i]] = true;
	}

	cout << res << endl;
	return 0;
}
