#include <bits/stdc++.h>
#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;

int n;
vector<int> a(10010), b(10010);

int main(){
    cin >> n;

    ll suma = 0;
    ll sumb = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        suma += a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
        sumb += b[i];
    }

    a.resize(n);
    b.resize(n);

    if (suma > sumb) {
        cout << "No" << endl;
        return 0;
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++){
        if (b[i] > a[i]){
            cnt += (b[i] - a[i] + 1LL) / 2 ;
        }
    }   

    //cout << sumb -suma << "," << cnt << endl;
    
    if (sumb - suma >= cnt){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


}