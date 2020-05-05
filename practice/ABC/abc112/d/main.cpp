#include <bits/stdc++.h>

using namespace std;

int n, m;

int main(){
    cin >> n >> m;
    vector<int> v;

    for(int i=1; i<=m/2; i++){
        if(m % i == 0){
            v.push_back(i);
        }
    }
    v.push_back(m);
/*
    int right = v.size();
    int left = -1;
    while (right - left > 1){
        int mid = (left+right)/2;
        if (v[mid] * n <= m){
            left = mid;
        } else {
            right = mid;
        }
    }
*/
    cout << *(upper_bound(v.begin(), v.end(), m/n)-1)<< endl;
}
