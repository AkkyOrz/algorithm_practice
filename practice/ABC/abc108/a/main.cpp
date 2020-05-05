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


int k;

int main(){
    cin >> k;
    if (k % 2 == 0){
        cout << (k/2) * (k/2) << endl;
    } else {
        cout << (k/2) * ((k+1)/2 )<< endl;
    }
}
