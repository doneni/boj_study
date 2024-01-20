#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string in;


    while(1)
    {
        getline(cin, in);
        if (in == ".")
            break;
        
        stack<char> stck;
        while(in.size())
        {
            if(in[0] == '(' || in[0] == '[')
            {
                stck.push(in[0]);
            }
            else if(in[0] == ')')
            {
                if(!stck.empty() && stck.top() == '(')  
                    stck.pop();
                else
                {
                    stck.push(in[0]);
                    break;
                }
            }
            else if(in[0] == ']')
            {
                if(!stck.empty() && stck.top() == '[')
                    stck.pop();
                else
                {
                    stck.push(in[0]);
                    break;
                }
            }
            in.erase(0, 1);
        }
        if(stck.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}