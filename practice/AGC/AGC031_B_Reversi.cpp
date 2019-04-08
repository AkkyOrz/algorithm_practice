#include <bits/stdc++.h>
using namespace std;


const int mod = 1e9+7;
typedef long long ll;


int n;
int c[200010];

vector<pair <int, int>> v;



// 独立区間の数を求めたい
// しかし、それをするにはTreeDPなどを用いる方法しか知らない
// それを利用するにはまず木にしなければいけないが、、、


int ind[200010];

int dp[200010];

vector<int> q;


int main(){
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> c[i];
    }

    for (int i = 0; i < n; i++){
        ind[i] = -1;
    }

    bool flag = false;
    int temp = -1;

    for (int i = 0; i < n; i++){
        if (ind[c[i]] < 0){
            ind[c[i]] = i;
            temp = c[i];
        } else {
            if (c[i] != temp){
                v.push_back(make_pair(ind[c[i]], i));
                ind[c[i]] = i;
            }
            temp = c[i];
        }
    }
/*
    for (int i = 0; i < v.size(); i++){
        cout << v[i].first << "," << v[i].second << endl;
    }
*/
    sort(v.begin(), v.end(), [](pair <int, int > a, pair <int, int> b){
        return a.second < b.second;
    });
    
    for (int i = 0; i < n; i++){
        q.push_back(v[i].first);
    }
    sort(q.begin(), q.end());
    
    int prev = 0;
    for(int i = 0; i < v.size(); i++){
        dp[v[i].second] = prev + 1;//以前の個数
        dp[v[i].second] += dp[v[i].first];
        for (int j = (int)(lower_bound(q.begin(), q.end(), v[i].second) - q.begin()); j < n; j++){
            dp[q[j]] = dp[v[i].second];
        }
        prev = dp[v[i].second];
    }

    cout << endl;
    for (int i = 0; i < n; i++){
        cout << dp[i] << endl;
    }
    prev++;
    cout << prev << endl;
}