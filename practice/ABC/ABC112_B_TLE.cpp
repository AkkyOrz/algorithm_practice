#include <bits/stdc++.h>

using namespace std;

int n, t;
vector<pair<int, int> > v(100);
int main(){
    cin >> n >> t;
    for (int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    int mini = 10000;
    for (int i = 0; i < n; i++){
        if (t >= v[i].second){
            mini = min(mini, v[i].first);
        }
    }

    if (mini == 10000){
        cout << "TLE" << endl;
    } else {
        cout << mini << endl;
    }
}
