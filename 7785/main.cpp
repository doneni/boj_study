#include <iostream>
#include <set>
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    set<string, greater<string>> s;
    int N = 0; cin >> N;
    string name, status;
    while(N--)
    {
        cin >> name >> status;
        if(status == "enter")
            s.insert(name);
        else
            s.erase(name);
    }
    for(const auto& e : s)
        cout << e << endl;
    return 0;
}
