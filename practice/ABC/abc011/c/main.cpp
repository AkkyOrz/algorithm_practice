#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;

int n;
int dp[310];
int ng[3];

bool check(int x){
    return ng[0] != x && ng[1] != x && ng[2] != x && x >= 0 ;
}

void make_dp(int n){
    dp[n] = 100;
    if (!check(n)){
        cout << "NO" << endl;
        return;
    }
    for (int i = n; i > 0; ){
        if (check(i-3)){
            dp[i-3] = dp[i] - 1;
            i -= 3;
        } else if (check(i-2)){
            dp[i-2] = dp[i] - 1;
            i -= 2;
        } else if (check(i-1)) {
            dp[i-1] = dp[i] - 1;
            i -= 1;
        } else {
            cout << "NO" << endl;
            return;
        }
    }
    if (dp[0] >= 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    cin >> n;
    for (int i = 0; i < 3; i++){
        cin >> ng[i];
    }
    make_dp(n);
}
