#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    std::stringstream ss;

    int year = 1999;
    int month = 5;

    ss << "年：" << std::setw(4) << year << "\n";
    ss << "月：" << std::setw(4) << month;

    std::cout << ss.str() << "\n";


    cout << endl;

    cout << setw(8) << setfill('0') << year << endl;

    return 0;
}