#include <iostream>
using namespace std;

string oct2bin(int oct)
{
    string bin = "";
    if(oct >= 4)
    {
        bin += "1";
        oct -= 4;
    }
    else
        bin += "0";
    if(oct >= 2)
    {
        bin += "1";
        oct -= 2;
    }
    else
        bin += "0";
    bin += to_string(oct);

    return bin;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string oct = "";
    cin >> oct;
    string bin = "";

    cout << stoi(oct2bin((int)oct[0] - 48));
    for(size_t i = 1; i < oct.size(); i++)
    {
        cout << oct2bin((int)oct[i] - 48);
    }
    cout << '\n';

    return 0;
}