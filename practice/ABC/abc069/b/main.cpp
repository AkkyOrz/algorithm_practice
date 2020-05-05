#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    string new_s;
    new_s += s[0];
    new_s += to_string(s.size() - 2);
    new_s += s[s.size()-1];
    cout << new_s << endl;
}
