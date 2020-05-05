#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> Pairs;

int sx, sy, tx, ty;
Pairs t;

string s;

void add_string(int n, char c){
    for (int i = 0; i < n; i++){
        s += c;
    }
}

void solve(Pairs t){
    if (t.first > 0 && t.second > 0){
        add_string(t.first, 'R');
        add_string(t.second, 'U');
        add_string(t.first, 'L');
        add_string(t.second, 'D');
        s += 'L';
        add_string(t.second+1, 'U');
        add_string(t.first+1, 'R');
        s += 'D';
        s += 'R';
        add_string(t.second+1, 'D');
        add_string(t.first+1, 'L');
        s += 'U';
        cout << s << endl;
    } else if (t.first > 0 && t.second < 0){
        add_string(t.first, 'R');
        add_string(t.second, 'D');
        add_string(t.first, 'L');
        add_string(t.second, 'U');
        s += 'L';
        add_string(t.second+1, 'D');
        add_string(t.first+1, 'R');
        s += 'U';
        s += 'R';
        add_string(t.second+1, 'U');
        add_string(t.first+1, 'L');
        s += 'D';
        cout << s << endl;
    } else if (t.first < 0 && t.second > 0){
        add_string(t.first, 'L');
        add_string(t.second, 'U');
        add_string(t.first, 'R');
        add_string(t.second, 'D');
        s += 'R';
        add_string(t.second+1, 'U');
        add_string(t.first+1, 'L');
        s += 'D';
        s += 'L';
        add_string(t.second+1, 'D');
        add_string(t.first+1, 'R');
        s += 'U';
        cout << s << endl;
    } else if (t.first < 0 && t.second < 0){
        add_string(t.first, 'L');
        add_string(t.second, 'D');
        add_string(t.first, 'R');
        add_string(t.second, 'U');
        s += 'R';
        add_string(t.second+1, 'D');
        add_string(t.first+1, 'L');
        s += 'U';
        s += 'L';
        add_string(t.second+1, 'U');
        add_string(t.first+1, 'R');
        s += 'D';
        cout << s << endl;
    }
}

int main(){
    cin >> sx >> sy >> tx >> ty;
    t.first = tx - sx;
    t.second = ty - sy;
    solve(t);
}
