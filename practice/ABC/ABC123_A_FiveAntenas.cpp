#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> v(5);

int k;

int main(){
    for (int i = 0; i < 5; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    cin >> k;

    if(v[4]-v[0] <= k){
        cout << "Yay!" << endl;
    } else {
        cout << ":(" << endl;
    }
}