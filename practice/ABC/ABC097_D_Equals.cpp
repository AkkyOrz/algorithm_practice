#include <bits/stdc++.h>

#define int long long int
#define double long double
#define MOD 1000000007
#define INF 1000000000000000007
const int MAX_N = 1 << 17;
#define bit(n) ((int)(1) << (n))
#define all(x) (x).begin(), (x).end()
#define debug(x) std::cout << #x << ": " << (x) << std::endl
using namespace std;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};
typedef pair<int, int> PII;
typedef pair<double, double> PDD;
typedef long long ll;
template <class T> bool chmax(T &a, const T &b){ if (a < b){ a = b; return 1; } return 0;}
template <class T> bool chmin(T &a, const T &b){ if (b < a){ a = b; return 1; } return 0;}

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }


int n, m;

vector<int> p(100010);

/*
pのペアによって接続された領域内ならば複数回行うことで自由に入れ替えることができる(置換と互換の話)
なおで、その領域にindexとあれが合う数字がどれだけあるかを考えれば良い。
UnionFindとかで構成すれば早そう
*/

int main(){
    
}