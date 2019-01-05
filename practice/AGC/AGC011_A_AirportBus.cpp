#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int n, c, k;


int main(){
    cin >> n >> c >> k;
    vector<int> t(n);
    for (int i = 0; i < n; i++){
        cin >> t[i];
    }

    sort(t.begin(), t.end());

    int now = t[0];
    int j = 0;
    int ans = 1;
    for (int i = 0; i < n; i++){
        if (t[i] > t[j] + k || i - j == c){
            ans++;
            j = i;
        }
    }

    cout << ans << endl;
}