#include <bits/stdc++.h>
#define MOD 1000000007
#define INF 1e9
typedef long long ll;
using namespace std;

string s;
int n;

vector<int> b(20010);
vector<int> w(20020);

int main(){
    cin >> n;
    cin >> s;
    b.resize(n+1);
    w.resize(n+1);

    b[0] = 0;
    w[0] = 0; 
    for (int i = 0; i < n; i++){
        if (s[i] == '.'){
            b[i+1] = b[i];
            w[i+1] = w[i] + 1; 
        }        
        if (s[i] == '#'){
            b[i+1] = b[i] + 1;
            w[i+1] = w[i];
        }
    }

    int black = b[n];
    int white = w[n];

    int min_i = INF;
    for (int bound = 0; bound < n; bound++){
        int cnt = 0;
        cnt += b[bound];
        cnt += white - w[bound+1];

        min_i = min(min_i,cnt);
    }

    cout << min_i << endl;
}