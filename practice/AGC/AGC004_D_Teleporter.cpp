#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll INF = 1LL<<60;

int n, k;


struct Tree {
    int next;
    int size;
};

Tree a[100001];

int root(int ){
    if ()
}

int main(){
    cin >> n >> k;
    int cnt = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i].next;
        a[i].next--;
    }

    if (a[0].next != 0) {
        a[0].next = 0;
        cnt++;
    }



}
