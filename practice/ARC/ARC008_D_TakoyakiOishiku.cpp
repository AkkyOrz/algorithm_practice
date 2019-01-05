#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<double,double> SEG;

ll n, m;
ll SIZE_SEG;
ll p[100010];
double a[100010], b[100010];

SEG seg[400040];

void init(int n_){
    SIZE_SEG = 1;
    while (SIZE_SEG < n_) SIZE_SEG *= 2;
    SEG v = make_pair(1,0);
    for (int i = 0; i < 2*SIZE_SEG - 1; i++) {
        seg[i] = v;
    }
}

SEG merge(SEG v1, SEG v2){
    SEG v;
    v.first = v1.first * v2.first;
    v.second = v1.second * v2.first + v2.second;
    return v;
}

void update(ll k, SEG v){
    k += SIZE_SEG-1;
    seg[k] = v;
    while(k > 0){
        k = (k-1)/2;
        seg[k] = merge(seg[2*k + 1], seg[2*k + 2]);
    }
}

SEG query(int a, int b, ll k, ll l, ll r){
    if (a <= l && r <= b) return seg[k];
    else if (a < r && l < b) {
        SEG t1 = query(a, b, k*2+1, l, (l+r)/2);
        SEG t2 = query(a, b, k*2+2, (l+r)/2, r);
        return merge(t1, t2);
    } else {
        return make_pair(1,0);
    }
}





int main(){
    cin >> SIZE_SEG >> m;
    vector<ll> p_inv;
    for (int i = 0; i < m; ++i) {
      cin >> p[i] >> a[i] >> b[i];
      p[i]--;
      p_inv.push_back(p[i]);
    }
    sort(p_inv.begin(), p_inv.end());
    p_inv.erase(unique(p_inv.begin(), p_inv.end()), p_inv.end());

    init(p_inv.size() + 1);

    double min_r = 1;
    double max_r = 1;
    for (int i = 0; i < m; i++){
        ll id = lower_bound(p_inv.begin(), p_inv.end(), p[i]) - p_inv.begin();
        update(id, make_pair(a[i], b[i]));
        SEG res = query(0, p_inv.size()+1, 0, 0, SIZE_SEG);
        min_r = min(min_r, res.first + res.second);
        max_r = max(max_r, res.first + res.second);
    }

    cout << fixed << setprecision(10) << min_r << " " << max_r << endl;
}
