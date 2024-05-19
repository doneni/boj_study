#include <iostream>
using namespace std;

int main()
{
    string in; cin >> in;
    int zero = 0, one = 0;
    for(size_t i = 1; i < in.size(); i++)
    {
        if (in[i] != in[i - 1])
            (in[i - 1] == '0') ? zero++ : one++;
        if(i == in.size() - 1)
            in[i] == '0' ? zero++ : one++;
    }
    cout << min(zero, one) << endl;
    return 0;
}
