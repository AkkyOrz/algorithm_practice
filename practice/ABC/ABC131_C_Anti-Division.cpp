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


int a, b, c, d;
int gcd(int a, int b) {
    if (a < b) return gcd(b, a);
    int r;
    while(r=a%b){
        a = b;
        b = r;
    }
    return b;
}
int lcm(int a, int b){
    return (a*b)/ gcd(a, b);
}

signed main()
{
    cin >> a >> b >> c >> d;
    
    int pc = (b/c) - ((a-1)/c);
    int pd = (b/d) - ((a-1)/d);
    int pcd = (b/lcm(c,d)) - ((a-1)/lcm(c,d));

    DEBUG(pc);
    DEBUG(pd);
    DEBUG(pcd);

    cout << (b-a+1) -pc -  pd + pcd << endl;;


    return 0;
}