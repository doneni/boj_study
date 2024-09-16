#include <iostream>
#include <string>
using namespace std;

int main()
{
    string in; cin >> in;
    int sum = 0;
    string n = "";
    for(size_t i = 0; i < in.size(); i++)
    {
        if(in[i] != ',')
            n += in[i];
        else
        {
            sum += stoi(n);
            n = "";
        }
    }
    sum += stoi(n);
    cout << sum;
    return 0;
}
