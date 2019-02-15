#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1 << 30;

vector<int> a, b;
vector<pair<int, int>> pa, pb;

int n;

int main(){
    cin >> n;

    for (int i = 0; i < n; i++){
        int temp;
        if (i % 2 == 0){
            cin >> temp;
            a.push_back(temp);
        } else {
            cin >> temp;
            b.push_back(temp);
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    
    pa.push_back(make_pair(a[0], 1));  
    for (int i = 1; i < a.size(); i++){
        if (pa.back().first != a[i]){
            pa.push_back(make_pair(a[i], 1));
        } else {
            pa.back().second++;
        }
    }

    sort(pa.begin(), pa.end(), [](pair<int, int> s, pair<int, int> t) {
        return s.second < t.second;
    });


    pb.push_back(make_pair(b[0], 1));
    for (int i = 1; i < b.size(); i++){
        if (pb.back().first != b[i]){
            pb.push_back(make_pair(b[i], 1));
        }else{
            pb.back().second++;
        }
    }

    sort(pb.begin(), pb.end(), [](pair<int, int> s, pair<int ,int> t) {
        return s.second < t.second;
    });

///////////////////////////////////////////////////////////

/*
    for (int i = 0; i < pa.size(); i++){
        cout << pa[i].first << ", " << pa[i].second << endl;
    }
    for (int i = 0; i < pb.size(); i++)
    {
        cout << pb[i].first << ", " << pb[i].second << endl;
    }
    */

///////////////////////////////////////////////////////////

    int res = 0;
    if (pa.back().first != pb.back().first){
        for (int i = 0; i < pa.size()-1; i++){
            res += pa[i].second;
        }
        for (int i = 0; i < pb.size()-1; i++){
            res += pb[i].second;
        }
    } else {
        int ma1=0;
        int ma2=0;
            for (int i = 0; i < pa.size() - 1; i++){
                ma1 += pa[i].second;
            }
            if (pb.size()>1){
            for (int i = 0; i < pb.size() - 2; i++){
                ma1 += pb[i].second;
            }
            }
            ma1 += pb.back().second;
        
            if(pa.size()>1 ){
            for (int i = 0; i < pa.size() - 2; i++){
                ma2 += pa[i].second;
            }
            }
            for (int i = 0; i < pb.size() - 1; i++){
                ma2 += pb[i].second;
            }
            ma2 += pa.back().second;
        res = min(ma1, ma2);
    }
    cout << res << endl;
}