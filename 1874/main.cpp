#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(void)
{
    int n = 0;
    cin >> n;
    vector<int> goal;
    vector<char> ans;
    for(int i = 0; i < n; i++)
    {
        int num = 0; 
        cin >> num;
        goal.push_back(num);
    }

    int target = goal.front();
    stack<int> stck;
    for (int i = 1; i < n + 1; i++)
    {
        ans.push_back('+'); 
        stck.push(i);

        while(!stck.empty() && stck.top() == target)
        {
            stck.pop();
            ans.push_back('-');
            goal.erase(goal.begin());
            target = goal.front();
            if (stck.empty())
                break;
        }
        if(stck.empty())
            continue;
        if(stck.top() < target)
            continue;
        else if(stck.top() > target)
        {
            cout << "NO" << '\n';
            return 0;
        }
    }

    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << '\n';

    return 0;
}