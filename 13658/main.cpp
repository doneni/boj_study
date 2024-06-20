#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    while(true)
    {
        cin >> n >> s;
        if (n == 0 && s == "0")
            break;
        string num = "";
        for(const auto& c : s)
        {
            if(c != n + '0')
                num.push_back(c);
        }
        bool start = false;
        for(const auto& c : num)
        {
            if(c != '0')
                start = true;
            if(start)
                cout << c;
        }
        cout << (start ? "" : "0") << endl;
    }
    return 0;
}
