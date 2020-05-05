#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int s;
vector<int> a;

int main(){
    cin >> s;

    a.push_back(s);

    while (true){
        int temp = a.back();
        if (temp % 2 == 0){
            temp /= 2;
        } else {
            temp = temp*3 + 1;
        }

        auto itr = find(a.begin(), a.end(), temp);

        if (itr != a.end()){
            cout << a.size()+1 << endl;
            break;
        }
        a.push_back(temp);

    }

    return 0;
}