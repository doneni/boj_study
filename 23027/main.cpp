#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s; cin >> s;
    if(s.find('A') != string::npos)
        for(auto const c : s)
            cout << (c == 'B' || c == 'C' || c == 'D' || c == 'F' ? 'A' : c);
    else if(s.find('B') != string::npos)
        for(auto const c : s)
            cout << (c == 'C' || c == 'D' || c == 'F' ? 'B' : c);
    else if(s.find('C') != string::npos)
        for(auto const c : s)
            cout << (c == 'D' || c == 'F' ? 'C' : c);
    else
        for(auto const c : s)
            cout << 'A';
    return 0;
}
