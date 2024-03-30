#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    
    int T = 0;
    cin >> T;
    
    int n = 0;
    string name, type;
    while(T--)
    {
        int ans = 1;
        cin >> n;
        unordered_map<string,int> um;
        for(int i = 0; i < n; i++)
        {
            cin >> name >> type;
            if(um.find(type) != um.end())
                um[type]++;
            else
                um[type] = 1;
        }
        for (const auto& e : um)
            ans *= e.second + 1;
        cout << --ans << '\n';
    }    

    return 0;
}