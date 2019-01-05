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

#define MAX 100005
int n, m;
int f[MAX];
ll dp[MAX];
ll sum[MAX];

bool check(int bset, int f){
    return ~((bset >> f) & 1);
}

int main(){
    dp[0] = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> f[i];
    }
    int l = 0, r = 0;
    int bset = 0;
    int S = 0;
    for (; r < n; r++){
        while(check(bset, f[r])){
            bset += (1 << f[r]);
        }

        for (int i = l; i < r; i++){
            int sum = 0;
            for (int j = l; j < i ; j++){
                sum += dp[j];
            }
            dp[i] = sum + 1;
        }
        if (r == l) r++;
        else {
            bset &= ~(1<<f[l]);
        }
    }

    for (int i = 0; i < n; i++){
        cout << i << '\t' << dp[i] << endl;
    }
}
