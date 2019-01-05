#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 998244353;

int N, A, B;
ll K;

ll pow(int n,ll a){
    if (a == 1){
        return n;
    }else if(a % 2 == 0){
        ll d = pow(n ,a/2);
        return d * d % MOD;
    }
    return n * pow(n,a-1) % MOD;
}

vector<ll> Com(N + 1, 0);
void make_comb(vector<ll> &v){
    ll res = 1;
    v[0] = res;
    v[N] = res;
    for (int i = 1; i <= N/2; i++){
        res = res * (N-i+1) % MOD * pow(i,MOD-2) % MOD;
        v[i] = res;
        v[N-i] = res;
    }
}

int main(){
    cin >> N >> A >> B >> K;

    ll sum = 0;
    vector<ll> Com(N + 1, 0);
    //make_comb(Com);
    make_comb(Com);


    for (int a = 0; a <= N; a++){
        if ((K-a*A)%B == 0){
            int b = (K-a*A)/B;
            if (0 <= b && b <= N){
                sum += (Com[a]) * (Com[b]);
                sum %= MOD;
            }
        }
    }
    cout << sum << endl;
}
