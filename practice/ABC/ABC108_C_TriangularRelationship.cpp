#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <queue>


#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;


ll n, k;

int main(){
    cin >> n >> k;
    ll divi = n/k;
    ll cnt = 0;
    if (k % 2 == 0){
        cnt += pow((n+k/2)/k, 3);
    }
    cnt += pow(divi, 3);
    cout << cnt << endl;
}
