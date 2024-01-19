#include <iostream>
#include <vector>
#include <unistd.h>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    string input;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        vector<char> stck;
        cin >> input;
        while(!input.empty())
        {
            if(input[0] == '(' || stck.empty())
                stck.push_back(input[0]);
            else if (stck.back() == '(')
                stck.pop_back();
            else
                stck.push_back(input[0]);
            input.erase(0,1);
        }
        if(stck.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}