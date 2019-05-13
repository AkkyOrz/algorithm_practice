#include <bits/stdc++.h>
using namespace std;
#define ALL(x) (x).begin(), (x).end()
#define DEBUG(x) cerr << #x << ": " << x << '\n'
#define int long long

typedef long long ll;

int n;

std::vector<int> enum_div(int n) //nの約数を列挙
{
    std::vector<int> ret;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            ret.push_back(i);
            if (i != 1 && i * i != n)
            {
                ret.push_back(n / i);
            }
        }
    }
    return ret;
}

signed main(){
    cin >> n;

    int sum = 0LL;

    vector<int> v = enum_div(n);
    v.push_back(n);
    sort(ALL(v));

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = v.size()-1; i > 0; i--){
        if ((v[i]-1)*(n%(v[i]-1)) + n/(v[i]-1) == n)  {
            if (n % (v[i]-1) == n / (v[i] - 1)) {
                sum += (v[i]-1);
                cout << (v[i] - 1) << endl;
            } else {
                break;
            }
        }
    }

    cout << sum << endl;
}
