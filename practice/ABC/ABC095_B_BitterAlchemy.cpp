#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> v(101);

int n, x;

int main(){
    cin >> n >> x;
    v.resize(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int cnt = 0;
    int res = 0;
    for (int i = 0; i < n; i++){
        cnt += v[i];
        res++;
    }

    while(cnt + v[0] <= x){
        cnt += v[0];
        res ++;
    }

    cout << res << endl;

}