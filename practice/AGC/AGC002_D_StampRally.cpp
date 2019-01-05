#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, m;

int a[100000], b[100000];
int q;
int x[100000], y[100000], z[100000] ;

struct UnionFind {
  vector<int> data;
  UnionFind(int size) : data(size, -1) { }
  bool unionSet(int x, int y) {
    x = root(x); y = root(y);
    if (x != y) {
      if (data[y] < data[x]) swap(x, y);
      data[x] += data[y]; data[y] = x;
    }
    return x != y;
  }
  bool findSet(int x, int y) {
    return root(x) == root(y);
  }
  int root(int x) {
    return data[x] < 0 ? x : data[x] = root(data[x]);
  }
  int size(int x) {
    return -data[root(x)];
  }
};



bool check(int k, int t){
    if (y[t] > k) return false;
    UnionFind u(k);
    for (int i = 0; i < m; i++){
        if (a[i] <= k && b[i] <= k){
            u.unionSet(a[i], b[i]);
        }
    }
    int cnt = 0;
    for (int i = 0; i < m; i++){
        if (a[i] <= k && b[i] <= k && (u.findSet(i, x[t]) || u.findSet(i, y[t]) )) {
            cnt++;
        }
    }
    return (z[t] >= cnt);
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a[i] >> b[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> x[i] >> y[i] >> z[i];
    }


    for (int i = 0; i < q; i++){
        int left = -1;
        int right = 100001;
        while (right - left > 1){
            int mid = (left + right) / 2;
            if (check(mid, i)){
                right = mid;
            } else {
                left = mid;
            }
        }
        cout << left << endl;
    }
}
