#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
    string s;
    cin >> s;
    int n = s.size();
    cout << hex << setw(8) << setfill('0')<< bitset<10>(1<<(n-1))<< endl;
    for (int bit = 0; bit < (1<<(n-1)); bit++){
        cout << hex << setw(8) << setfill('0')<<
        bitset<10>(bit) << " < " << bitset<10>(1<<(n-1))<< endl;
        string t;
        for (int i = 0; i < n; i++) {
          t += s[i];
          if (bit & (1<<i)) {
            t += "+";
          }
        }
        //cout << t << "=?" << endl;
    }
    return 0;
}
