#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll INF = 1LL<<60;

string S, T;
int n, m;

int gcd( int m, int n )
{
    if ( ( 0 == m ) || ( 0 == n ) )
	   return 0;

	// ユークリッドの方法
	while( m != n )
	{
		if ( m > n ) m = m - n;
		else         n = n - m;
	}
	return m;
}//gcd

int lcm(int a, int b){
    return a*b/gcd(a,b);
}

int main(){
    cin >> n >> m;
    cin >> S;
    cin >> T;
    int L = lcm(n, m);
    string X(L, 'A');

    bool check = true;
    for (int i = 0; i < n; i++){
        X[i*(int)(L/n)] = S[i];
    }
    for (int j = 0; j < m; j++){
        if (X[j*(int)(L/m)] == 'A'){
            X[j*(int)(L/m)] = T[j];
        } else if (X[j*(int)(L/m)] != T[j]){
            check = false;
        }
    }
    if (check){
        cout << L << endl;
    } else {
        cout << -1 << endl;
    }
}
