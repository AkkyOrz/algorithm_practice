#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int H, W;
int h, w;

int main(){
    cin >> H >> W;
    cin >> h >> w;

    cout << (H - h) * (W - w) << endl;
}