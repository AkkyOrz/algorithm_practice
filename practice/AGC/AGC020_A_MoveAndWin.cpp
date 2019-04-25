#include <bits/stdc++.h>
#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;

int a, b;
int n;

int main(){
    cin >>n >> a >> b;

    if ((b - a) % 2 == 0){
        cout << "Alice" << endl;
    }  else {
        cout << "Borys" << endl;
    }
}