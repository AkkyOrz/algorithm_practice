#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#define MOD 1000000007
#define INF (1ll<<60)
#define MAX 100005
typedef long long ll;
using namespace std;

int n;
int a[200000];

bool check(int bset, int a){
    return (bset ^ a) == (bset + a);
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = 0, r = 0;
    long long num = 0, bset = 0;
    for(;l < n;l++){
        while (r < n && check(bset, a[r])){
            bset += a[r];
            r++;
        }
        num += (r-l);

        if (r == l) r++;
        else {
            bset -= a[l];
        }
    }
    cout << num << endl;
}
