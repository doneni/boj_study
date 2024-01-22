#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> vec;

void init()
{
    int c_0 = 0, c_1 = 0;
    for(int i = 0; i <= 40; i++)
    {
        if(i == 0 || i == 1)
        {
            c_0 = (i == 0) ? 1 : 0;
            c_1 = (i == 0) ? 0 : 1;
        }
        else
        {
            c_0 = vec[i - 1].first + vec[i - 2].first;
            c_1 = vec[i - 1].second + vec[i - 2].second;
        }
        vec.push_back(make_pair(c_0, c_1));
    }
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t = 0;
    cin >> t;

    init();
    int input = 0;
    for(int i = 0; i < t; i++)
    {
        cin >> input;
        cout << vec[input].first << " " << vec[input].second << '\n';
    }

    return 0;
}