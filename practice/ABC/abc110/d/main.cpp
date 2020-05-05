#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, m;

pair<int, int> fact[10000000];

int main(){
    cin >> n >> m;
    int index = 0;

    if (m % 2 == 0){
        while(m%2 == 0){
            fact[index].first = 2;
            fact[index].second++;
            m /= 2;
        }
        index++;
    }

    for (int i = 3; m > 1; i += 2){
        if (m % i == 0){
            fact[index].first = i;
            fact[index].second++;
            m /= i;
        }
        index++;
    }
    
    for (int i = 0; i < index; i++){
        cout << fact[i].first << "," << fact[i].second << endl;
    }
}