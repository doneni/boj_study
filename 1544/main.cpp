#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    string in;
    unordered_set<string> us; 
    while(N--)
    {
        cin >> in;
        string str;
        for(size_t i = 0; i < in.size(); i++)
        {
            str = in.substr(i, in.size() - i) + in.substr(0, i);
            if(us.count(str))
                break;
            if(i == in.size() - 1)
                us.insert(in);
        }
    }
    cout << us.size() << '\n';
    return 0;
}
