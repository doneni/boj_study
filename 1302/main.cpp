#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    int max = 0;
    string max_book;
    map<string,int> m;
    string book;
    while(N--)
    {
        cin >> book;
        m[book]++;
        if(max < m[book])
            max = m[book];
    }
    for(auto i = m.begin(); i != m.end(); i++)
        if(max == i->second)
        {
            cout << i->first << '\n';
            break;
        }
    return 0;
}
