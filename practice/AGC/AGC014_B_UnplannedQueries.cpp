#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    vector<int> check(n);

    for (int i = 0; i < n; i++){
        check[i] = 0;
    }
    for (int i = 0; i < m; i++){
        cin >> a[i] >> b[i];
        check[a[i]]++;
        check[b[i]]++;
    }

    bool flag = true;

    for (int i = 0; i < n; i++){
        if (check[i] % 2 == 1){
            flag = false;
        }
    }

    if (flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}