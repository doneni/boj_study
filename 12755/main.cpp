#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    int n = 1;
    while(true)
    {
        string s = to_string(n);
        if(N > s.length()) {
            N -= s.length();
            n++;
        }
        else {
            cout << s[N-1];
            break;
        }
    }
    return 0;
}
