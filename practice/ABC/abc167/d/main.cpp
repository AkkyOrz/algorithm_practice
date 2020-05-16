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
#define INF (1ll<<60)

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
const int MOD = 1e9 + 7;

int n, k;
VI a(200010);
VI cycle;
vector<bool> seen(200010);

signed main()
{
	cin >> n >> k;
	a.resize(n);
	seen.resize(n);
	REP(i, n){
		cin >> a[i];
		a[i]--;
	}

	int now = 0;
	seen[now] = true;
	cycle.push_back(now);
	while(seen[a[now]] == false){
		int next = a[now];
		seen[next] = true;
		cycle.push_back(next);
		now = next;
	}

	int next = a[now];
	auto loop_begin_index = (int)(find(ALL(cycle),next) - cycle.begin());

	int loop_size = cycle.size() - loop_begin_index;

	// ループは高々1つ
	// ループにないものを探すのが大変？
	DEBUG(loop_begin_index);
	DEBUG(loop_size);
	DEBUG(k%loop_size);
	DEBUG(cycle[1]);
	DEBUG(cycle[2]);
	DEBUG(cycle[3]);

	if (k < loop_begin_index) {
		cout << cycle[k] + 1 << endl;
	} else {
		cout << cycle[(k-loop_begin_index)%(loop_size)+loop_begin_index]  + 1<< endl;
	}

	return 0;
}
