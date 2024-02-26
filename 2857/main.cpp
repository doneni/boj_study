#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int ans = 5;
    vector<int> agent;
    string code;
    for(int i = 1; i <= 5; i++)
    {
        bool isAgent = true;
        cin >> code;
        if(code.find("FBI") != string::npos)
        {
            for(const auto& c : code)
            {
                if('A' <= c <= 'Z')
                    continue;
                else if(c == '-')
                    continue;
                else if('0' <= c <= '9')
                    continue;
                else{
                    isAgent = false;
                    break;
                }
            }
        }
        else
            isAgent = false;
        if(isAgent)
            agent.push_back(i);
    }
    if(agent.empty())
        cout << "HE GOT AWAY!" << '\n';

    for(const auto& a : agent)
        cout << a << " ";

    return 0;
}