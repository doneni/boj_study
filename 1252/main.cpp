#include <iostream>
#include <algorithm>
using namespace std;

string add(string bin1, string bin2)
{
    string res = "";
    int carry = 0;
    reverse(bin1.begin(), bin1.end());
    reverse(bin2.begin(), bin2.end());
    for(size_t i = 0; i < bin1.size(); i++)
    {
        int num = (i > bin2.size() - 1) ? (int(bin1[i]) - 48 + carry) : (int(bin1[i]) - 48 + int(bin2[i]) - 48 + carry);
        if(num > 1)
        {
            carry = 1;
            num -= 2;
        }
        else
        {
            carry = 0;
        }
        res += to_string(num);
    }
    if(carry)
        res += to_string(carry);

    while(1)
    {
        if(res.back() == '0' && res.size() != 1)
            res.pop_back();
        else
            break;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string bin1, bin2;
    cin >> bin1 >> bin2;

    if(bin1.size() < bin2.size())
    {
        string tmp;
        tmp = bin1;
        bin1 = bin2;
        bin2 = tmp;
    }
    cout << add(bin1, bin2) << '\n';

    return 0;
}