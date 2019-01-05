#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
#include <string>
#include <cmath>
#include <vector>
using namespace std;



/*
5 25000
1 20 1000 -> 20で20*100+1000 =  3000
2 40 1000 -> 40で40*200+1000 =  9000
3 50 1000 -> 50で50*300+1000 = 16000
4 30 1000 -> 30で30*400+1000 = 13000
5  1 1000  ->  1で 1*500+1000 =  1500

400*15 = 6000
300*35 = 9000+1500
つまり4を30回3を35回5を1回で66回
66回らしい
*/




int main(int argc, char const *argv[]) {
    int D, G;
    int p[10];
    int c[10];
    bool prev[10];
    int bonus[10];
    cin >> D >> G;
    vector<int> v(D);
    for (int i = 1; i <= D; i++){
        cin >> p[i] >> c[i];
    }
    for (int i = 1; i <= D; i++){
        bonus[i] = i*100*p[i] + c[i];
        prev[i] = false;
        v[i-1] = i;
    }


    int min = 100000;
    do {
        int cnt = 0;
        int sum = 0;
        int last_i;
        for(int i = 0; i < v.size(); i++){
            if (sum + bonus[v[i]] <= G){
                sum += bonus[v[i]];
                cnt += p[v[i]];
            } else {
                last_i = i;
                break;
            }
        }
        for (int i = 0; i < p[v[last_i]]; i++){
            if (sum + v[last_i]*100 <= G){
                sum += v[last_i]*100;
                cnt++;
            } else {
                break;
            }
        }
        if (min > cnt) min = cnt;
    } while(next_permutation(v.begin(), v.end()));

    cout << min << endl;
}
