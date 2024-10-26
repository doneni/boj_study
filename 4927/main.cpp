#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t = 1;
    while(true) {
        string line; cin >> line;
        if(line == ".")
            break;
        string sa = "", sb = "", sc = "";
        int ma = 0, mb = 0, mc = 0;
        bool isStar;
        int idx = 0;
        while(true) {
            if(line[idx] == '*' || line[idx] == '+') {
                isStar = (line[idx++] == '*' ? true : false);
                break;
            }
            ma += line[idx++] - '0';
        }
        ma %= 9;
        while(true) {
            if(line[idx] == '=')
                break;
            mb += line[idx++] - '0';
        }
        idx++;
        mb %= 9;
        while(true) {
            if(line[idx] == '.')
                break;
            mc += line[idx++] - '0';
        }
        cout << t++ << ". ";
        if(isStar)
            cout << ((ma * mb) % 9 == mc % 9 ? "PASS" : "NOT!") << "\n";
        else
            cout << ((ma + mb) % 9 == mc % 9 ? "PASS" : "NOT!") << "\n";
    }
    return 0;
}
