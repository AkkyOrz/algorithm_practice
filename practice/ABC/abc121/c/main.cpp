#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, m;

vector<pair<ll, ll>> p(100010);

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second;
    }
    p.resize(n);

    sort(p.begin(), p.end());

    ll money = 0;
    ll cnt = 0;
    for (int i = 0; i < n; i++){
        if (cnt + p[i].second < m){
            money += p[i].first*p[i].second;
            cnt += p[i].second;
        } else {
            money += p[i].first * (m - cnt);
            cnt = m;
            break;
        }
    }

    cout << money << endl;
}


