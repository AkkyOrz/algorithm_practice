#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n , m;

int a[30][30];
vector<int> cnt(30);
int k[30];

int main(){
    cin >> n >> m;
    cnt.resize(m+1);
    for (int i = 0; i < n; i++){
        cin >> k[i];
        for (int j = 0; j < k[i]; j++){
            cin >> a[i][j] ;
            cnt[a[i][j]]++;
        }
    }

    int res = 0;
    for (int i = 1; i <= m; i++){
        if (cnt[i] == n){
            res++;
        }
    }

    cout << res << endl;
}