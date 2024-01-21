#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int k = 0;
    cin >> k;

    int in = 0, sum = 0;
    vector<int> vec;
    for(int i = 0; i < k; i++)
    {
        cin >> in;
        if(in)
            vec.push_back(in);
        else if(!vec.empty())
            vec.pop_back();
    }

    for(auto& entry : vec)
        sum += entry;
    cout << sum << endl;
    return 0;
}