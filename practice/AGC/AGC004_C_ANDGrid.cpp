#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll INF = 1LL<<60;

int h, w;

string a[501];
string r[501];
string b[501];


int main(){
    cin >> h >> w;
    for (int y = 0; y < h; y++){
        cin >> a[y];
    }

    string sharp(w-1, '#');
    string period(w-1, '.');
    string s;
    for (int y = 0; y < h; y++){
        if (y % 2 == 0) {
            s = sharp;
            r[y] = '.' + s;

            s = '#' + period;
            b[y] = s;
        } else {
            s = sharp;
            b[y] = s + '.';

            s = period + '#';
            r[y] = s;
        }
    }
    for (int y = 0; y < h; y++){
        for (int x = 0; x < w; x++){
            if (a[y][x] == '#'){
                r[y][x] = '#';
                b[y][x] = '#';
            }
        }
    }


    for (int y = 0; y < h; y++){
        cout << r[y] << endl;
    }
    cout << endl;
    for (int y = 0; y < h; y++){
        cout << b[y] << endl;
    }
/*
    for (int y = 0; y< h; y++){
        for (int x = 0; x < w; x++){
            if (r[y][x] == b[y][x]){
                cout << '#' ;
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
    */

}
