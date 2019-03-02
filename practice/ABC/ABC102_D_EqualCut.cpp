#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
vector<int> a(200010);

vector<ll> sum(200010);

int main(){
    cin >> n;
    a.resize(n);
    sum.resize(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sum[0] = 0;
    for (int i = 1; i < n; i++){
        sum[i] += sum[i-1] + a[i-1];  // sum[j] - sum[i] は [i, j) の和
    }


    int mi = 1e9;
    int index = -1;
    for (int i = 1; i < n-1; i++){
        ll s1 = sum[i] - sum[0];
        ll s2 = sum[n-1] - sum[i];
        if (abs(s2 - s1) < mi){
            index = i;
        }
    }
    cout << index << endl;  // [0, index) と [index, n)に分ける

    mi = 1e9;
    int index_l = -1;
    for (int i = 1; i < index; i++){
        ll s1 = sum[i] - sum[0];
        ll s2 = sum[index-1] - sum[i];
        if (abs(s2 - s1) < mi)
        {
            index_l = i;
        }
    }
    cout << index_l << endl;

    mi = 1e9;
    int index_r = -1;

    for (int i = index; i < n; i++){
        ll s1 = sum[i] - sum[index];
        ll s2 = sum[n - 1] - sum[i];
        if (abs(s2 - s1) < mi){
            index_l = i;
        }
    }
    cout << index_r << endl;

    vector<ll> v(4);
    v[0] = sum[index_l];
    v[1] = sum[index] - sum[index_l];
    v[2] = sum[index_r] - sum[index];
    v[3] = sum[n-1] - sum[index_r];

    sort(v.begin(), v.end());
    cout << v[3] - v[0] << endl;
}