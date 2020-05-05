#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int degit[] = {0,2,5,5,4,5,6,3,7,6};

int n, m;
int a[10];
vector<pair<int, int>> v;

string dp[100010];

bool s_compare(string p, string q){
    if (p.back() == 'a') return true;
    if (q.back() == 'a') return false;
    if (p.size() != q.size()){
        return p.size() < q.size();
    } else {
        for (int i = 0; i < p.size(); i++){
            if (p[i] != q[i]){
                return p[i] < q[i];
            }
        }
    }
    //cout << "!!" << endl;
    return true;
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a[i];
        v.push_back(make_pair(a[i],degit[a[i]]));
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
        {if (a.second != b.second){
            return a.second < b.second;
        } else {
            a.first > b.first;
        }}
    });
/*
    for (int i = 0; i < m; i++){
        cout << v[i].first << "," << v[i].second << endl;
    }
*/
    for (int i = 0; i <= n; i++){
        dp[i] = "a";
    }
    dp[0] = "";

    for (int i = 0; i < m; ++i){
        for (int w = 0; w <= n; w++)
        {
            if (w - v[i].second >= 0 && dp[w - v[i].second] == "a")
                continue;
            if(w - v[i].second >= 0 && s_compare(dp[w], to_string(v[i].first) + dp[w - v[i].second])){
                dp[w] = to_string(v[i].first) + dp[w - v[i].second];
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << dp[i] << ",";
    }
    cout << dp[n] << endl;
}



