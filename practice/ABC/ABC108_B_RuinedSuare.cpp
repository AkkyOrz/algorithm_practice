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

int x_1, y_1, x_2, y_2;

int main(){
    cin >> x_1 >> y_1 >> x_2 >> y_2;
    int x_3 = x_2 - (y_2-y_1);
    int y_3 = y_2 + (x_2-x_1);
    int x_4 = x_3 - (y_3-y_2);
    int y_4 = y_3 + (x_3 -x_2);
    cout << x_3  << " "<< y_3 << " " <<  x_4 << " "<< y_4 << endl;
}
