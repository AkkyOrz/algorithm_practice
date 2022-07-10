// @prefix atcoder
// @description atcoder template

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace	std;
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
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

signed	main(void)
{
	int	s;

	cin >> s;
	if (s < 10)
	{
		cout << "21:0" + to_string(s) << endl;
	}
	else if (s < 60)
	{
		cout << "21:" + to_string(s) << endl;
	}
	else if (s < 70)
	{
		cout << "22:0" + to_string(s - 60) << endl;
	}
	else
	{
		cout << "22:" + to_string(s - 60) << endl;
	}
	return (0);
}
