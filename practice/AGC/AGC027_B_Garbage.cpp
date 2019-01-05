#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, X;

bool check(vector<int> &x, int right, int k){
    if (right == 0) return false;
    ll cost1 = pow(k+1, 2)*x[right] + X + x[right] + X + x[right] * 4 + X;
    ll cost2 = X + pow(k+2, 2)*x[right] + X;
    // cout << "cost" << cost1 << "," << cost2 << endl;
    return cost1 >= cost2;
}

int main(){
    cin >> n >> X;
    vector<int> x(n+1);
    x[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> x[i];
    }

    ll sum = 0;
    int right = n;
    while(right > 0){
        int k = 0;
        sum += x[right] * pow(k+1, 2);
        right--;
        //cout << 1 << ":"<< right << endl;
        sum += X;
        k++;
        sum += (x[right+1] - x[right]) * pow(k+1, 2);
        //cout << sum << "," << right << endl;
        while (check(x, right, k)){
            sum += X;
            k++;
            right--;
            sum += (x[right+1] - x[right]) * pow(k+1, 2);

            //cout << 2 << ":"<< right << endl;
            //cout << sum << endl;
            if (right == 0) {
                sum += X;
                cout << sum << endl;
                return 0;
            }
        }
        //cout << 3 << ":"<< right << endl;
        sum += x[right] * pow(k+1, 2);
        sum += X;
    }

    cout << sum << endl;


}
