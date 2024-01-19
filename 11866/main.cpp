#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0, k = 0;
    cin >> n >> k;
    vector<int> vec;
    for(int i = 0; i < n; i++)
        vec.push_back(i + 1);

    int next = 0;
    cout << "<";
    for(int i = 0; i < n; i++)
    {
        next += k - 1;
        while(next > vec.size() - 1)
            next -= vec.size();
        if(vec.size() == 1)
            cout << vec[next] << ">" << endl;
        else
            cout << vec[next] << ", ";
        vec.erase(vec.begin() + next);
    }

    return 0;
}
