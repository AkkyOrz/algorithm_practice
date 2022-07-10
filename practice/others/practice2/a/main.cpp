// @prefix atcoder
// @description atcoder template

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace	std;
using namespace	atcoder;
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
#define INF (1ll << 60)

int	gcd(int a, int b)
{
	return (b ? gcd(b, a % b) : a);
}
int	lcm(int a, int b)
{
	return (a / gcd(a, b) * b);
}
const int		MOD = 1e9 + 7;

void	printAns(bool flag)
{
	if (flag)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}
}

int n, q;
VI				v(200010);

signed	main(void)
{
	cin >> n >> q;
	dsu uf(n);
	for (auto i = 0; i < q; i++)
	{
		int t, a, b;
		cin >> t >> a >> b;
		if (t == 1)
		{
			printAns(uf.same(a, b));
		}
		else
		{
			uf.merge(a, b);
		}
	}
	return (0);
}
