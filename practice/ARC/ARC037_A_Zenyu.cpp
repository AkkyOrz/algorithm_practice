#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;


int n;
int m[25];

int main(){
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> m[i];
    }
    int time_s = 0;
    for (int i = 0; i < n; i++){
        if (m[i] < 80){
            time_s += 80 - m[i];
        }
    }
    cout << time_s << endl;
}
