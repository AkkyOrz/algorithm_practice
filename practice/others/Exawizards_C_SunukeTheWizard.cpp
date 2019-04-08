#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<int>> index_alpha(26);
ll n , q;
string s;

vector<pair<char, char>> p(200010);
vector<int> gorem(200010);

int main(){
    cin >> n >>  q;
    cin >> s;
    p.resize(q);
    gorem.resize(n);

    for (int i = 0; i < n; i++){
        gorem[i] = 1;
    }

    for (int i = 0; i < q; i++){
        cin >> p[i].first >> p[i].second;
    }

    for (int i = 0; i < n; i++){
        index_alpha[s[i] - 'A'].push_back(i);
    }

    for (int i = 0; i < p.size(); i++){
        int index = p[i].first - 'A';
        int delta;
        if (p[i].second == 'L') {
            delta = -1;
        } else {
            delta = 1;
        }

        if (delta < 0){
            for (int j = 0; j < index_alpha[index].size(); j++){
                int x = index_alpha[index][j];
                //cout << "x" << x << endl;
                if (gorem[x] > 0){
                    int nx = x + delta;
                    if (0 <= nx && nx < n){
                        gorem[nx] += gorem[x];
                        gorem[x] = 0;
                    } else {
                        gorem[x] = 0;
                    }
                }
            }
        } else {
            for (int j = index_alpha[index].size() - 1; j >= 0; j--){
                int x = index_alpha[index][j];
                //cout << "x" << x << endl;
                if (gorem[x] > 0){
                    int nx = x + delta;
                    if (0 <= nx && nx < n){
                        gorem[nx] += gorem[x];
                        gorem[x] = 0;
                    } else {
                        gorem[x] = 0;
                    }
                }
            }
        }
    }

    int sum = 0;
    for (int i = 0 ; i < n; i++){
        //cout << gorem[i] << ", "; 
        sum += gorem[i];
    }
    //cout << endl;

    cout << sum << endl;
}