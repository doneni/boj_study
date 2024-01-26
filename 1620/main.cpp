#include <iostream>
#include <unordered_map>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0, M = 0;
    cin >> N >> M;

    string name;
    unordered_map<string, string> pokemon;
    for(int i = 1; i <= N; i++)
    {
        cin >> name;
        pokemon[to_string(i)] = name;
        pokemon[name] = to_string(i);
    }

    string str;
    for(int i = 0; i < M; i++)
    {
        cin >> str;
        cout << pokemon[str] << '\n';
    }

    return 0;
}