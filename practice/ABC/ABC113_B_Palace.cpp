#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1 << 30;

int n, t;
int a;

int h[1010];

int main(){
    cin >> n >> t;
    cin >> a;

    for (int i =0; i < n; i++){
        cin >> h[i];
    }

    double res = INF;
    int index = -1;

    for (int i = 0; i < n; i++){
        double p = t - h[i] * 0.006;
        if (abs(p - a) < res){
            index = i;
            res = abs(p-a);
        }
    }

    cout << index+1 << endl;
}