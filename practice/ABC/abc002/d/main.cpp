#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> VI;

int n, m;

bool is_con[12][12];

vector<int> x(1000), y(1000);


int main(){
    cin >> n >> m;

    for (int i = 0; i < m; i++){
        cin >> x[i] >> y[i];
        x[i]--; y[i]--;
        is_con[x[i]][y[i]] = true;
        is_con[y[i]][x[i]] = true;
    }

    int ma = -1;

    for (int bit = 1; bit < (1<<n); bit++){

        bool flag = true;
        for(int i = 0; i < n; i++){
            for (int j = 0; j < i; j++){
                if (((bit>>i) & (bit>>j) & 1 ) && !is_con[i][j]){
                    flag = false;
                }
            }
        }
        if (flag) {
            int cnt = ((bitset<13>)bit).count();
            ma = max(ma, cnt);
        }
    }

    cout << ma << endl;
}