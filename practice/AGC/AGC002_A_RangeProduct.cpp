#include <iostream>

using namespace std;

typedef long long ll;
const ll MOD = 998244353;

int n, m;
int x[100000], y[100000];
int ball[100000];
bool is_red[100000];


int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> x[i] >> y[i];
        x[i]--; y[i]--;
    }

    is_red[0] = true;

    for (int i = 0; i < n; i++){
        ball[i]++;
    }

    for (int i = 0; i < m; i++){
        // x[i] から y[i] へ移す操作をする。
        ball[x[i]]--; ball[y[i]]++;
        if (is_red[x[i]]) {
            is_red[y[i]] = true;
            if (ball[x[i]] == 0){
                is_red[x[i]] = false;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        if (is_red[i]){
            sum++;
        }
    }
    cout << sum << endl;

}
