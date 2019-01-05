#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int const INF = 1000000000;

int n;
int a, b;
vector<ll> v(50);

ll comb[51][51];

void Comb() {
  for (int i = 0; i < 51; ++i) {
    for (int j = 0; j <= i; ++j) {
      if (j == 0 || i == j) {
        comb[i][j] = 1LL;
      } else {
        comb[i][j] = comb[i - 1][j - 1] + comb[i - 1][j];
      }
    }
  }
}



int main(){
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    long double sum = 0;
    for (int i = 0; i < a; i++){
        sum += v[i];
    }
    sum /= a;
    cout << fixed << setprecision(10) <<  sum << endl;

    Comb();
    ll cnt = 0LL;
    int last = count(v.begin(), v.end(), v[a-1]);
    if (v[a-1] == v[0]){
        for (int i = a; i <= b; i++){
            cnt += comb[last][i];
        }
    } else {
        int i = 0;
        while(v[i] != v[a-1]) i++;
        cnt = comb[last][a-i];
    }
    cout << cnt << endl;
}
