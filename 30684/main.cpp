#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    string c = "ZZZ";
    while(n--)
    {
        string in; cin >> in;
        if(in.size() == 3 && c > in)
            c = in;
    }
    cout << c;
    return 0;
}
