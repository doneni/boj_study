#include <iostream>
using namespace std;

int bin2oct(string bin)
{
    int oct = 0;
    int base = 1;
    for(int i = bin.size() - 1; i >= 0; --i)
    {
        if(bin[i] == '1')
            oct += base;
        base *= 2;
    }
    return oct;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string bin = "";
    cin >> bin;
    string oct = "";
    int idx = (bin.size() % 3) ? (bin.size() % 3) : 3;
    cout << bin2oct(bin.substr(0, idx));
    while(idx < bin.size())
    {
        cout << bin2oct(bin.substr(idx, 3));
        idx += 3;
    }
    cout << '\n';

    return 0;
}