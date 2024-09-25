#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int N; cin >> N;
    string game; cin >> game;
    int need = 0;
    if(game == "Y")
        need = 2;
    else if(game == "F")
        need = 3;
    else
        need = 4;
    unordered_set<string> played;
    int party = 1, ans = 0;
    while(N--)
    {
        string player; cin >> player;
        if(played.find(player) == played.end())
        {
            party++;
            played.insert(player);
        }
        if(party == need)
        {
            ans++;
            party = 1;
        }
    }
    cout << ans;
    return 0;
}
