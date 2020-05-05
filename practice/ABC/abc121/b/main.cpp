#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, m, c;
vector<int> b(20);

int a[20][20];

int main(){
    cin >> n >> m >> c;
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++){
        int res = 0;
        for (int j = 0; j < m; j++){
            res += a[i][j] * b[j];            
        }
        res += c;
        if (res > 0) cnt++;
    }

    cout << cnt << endl;
}