#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
double x[11];
vector<string> s(11);

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x[i] >> s[i];
    }
    double sum = 0.0;
    for (int i = 0; i < n; i++){
        if (s[i] == "JPY"){
            sum += x[i];
        } else {
            sum += 380000.0 * x[i];
        }
    }

    cout << fixed << setprecision(6) << sum << endl;
}