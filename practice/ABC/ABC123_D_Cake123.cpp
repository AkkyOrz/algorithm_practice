#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF (1ll << 59)

ll x, y, z;
ll k;

vector<ll> a(1001), b(1001), c(1001);
vector<ll> v(1000001);

bool check(ll p, ll k){
    int cnt = 0;
    for (int i = 0; i < z; i++)
    {
        cnt += upper_bound(v.begin(), v.end(), (ll)(p - c[i])) - v.begin();
        // なぜ lowerじゃなくupper_bound()じゃなきゃいけないのか？
        // なぜcnt<=kじゃなく cnt < k なのか？
    }
    return cnt < k;
}

int main(){
    cin >> x >> y >> z >> k;
    for (int i = 0; i < x; i++){
        scanf("%ll", a[i]);
    }
    for (int i = 0; i < y; i++){
        scanf("%ll", b[i]);
    }
    for (int i = 0; i < z; i++){
        scanf("%ll", c[i]);
    }

    c.resize(z);
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            v[i*x+j] = a[i]+b[j];
        }
    }
    v.resize(x*y);



    //sort(a.begin(), a.end());
    //sort(b.begin(),b.end());
    sort(v.begin(), v.end());
    sort(c.begin(), c.end());

/*
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",";
    }
    cout << endl;
*/
    for (ll i = x*y*z; i > x*y*z - k ; i--){
        ll left = -1;
        ll right = INF;
        while (right - left > 1)
        {
            ll mid = (left + right) / 2;
            if (check(mid, i))
            {
                left = mid;
            }
            else
            {
                right = mid;
            }
        }
        cout << right << endl;
    }
}