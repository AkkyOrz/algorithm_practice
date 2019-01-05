#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include <string>
using namespace std;

int T;
vector<int> card(9);

bool is_same_number(int a, int b, int c) {
    if (a == b && b == c) {
        return true;
    } else {
        return false;
    }
}


bool is_sequence(int a, int b, int c) {
    if (a+2 == b+1 && b+1 == c) {
        return true;
    } else {
        return false;
    }
}

bool is_good_set(int a, int b, int c) {
    return is_same_number(a, b, c) || is_sequence(a, b, c);
}

bool is_all_good_set(){
    if (is_good_set(card[0], card[1], card[2]) &&
        is_good_set(card[3], card[4], card[5]) &&
        is_good_set(card[6], card[7], card[8])){
        return true;
    } else {
        return false;
    }
}

int win(){
    sort(card.begin(), card.begin()+9);
    do {
        if (is_all_good_set()){
            return 1;
        }
    } while (next_permutation(card.begin(), card.end()));
    return 0;
}

int main() {
    cin >> T;
    for (int t=0; t<T; ++t) {
        for (int i=0; i<9; ++i) {
            cin >> card[i];
//            cout << card[i] << " ";
        }
//        cout << endl;
        string color;
        for (int i=0; i<9; ++i) {
            cin >> color;
//            cout << color << " ";
            if (color == "G") card[i] += 10;
            else if (color == "B") card[i] += 20;
        }
//        cout << endl;

/*
        for (int i=0; i<9; ++i) {
            cout << card[i] << "*" ;
        }
*/
//        cout << endl;
        cout << win() << endl;
    }
}
