#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

ll enum_div(ll n){
	vector<ll> ret;
	for(ll i=1 ; i*i<=n ; ++i){
		if(n%i == 0){
			ret.push_back(i);
		}
	}
	return ret.back();
}

int solve(){
	ll r1 = enum_div(n);
	ll r2 = (ll)n/r1;
	ll a = max(r1, r2);

	int res = 1;
	while (a /= 10){
		res++;
	}
	return res;
}

int main()
{
	cin >> n;
	cout << solve() << endl;
	return 0;
}
