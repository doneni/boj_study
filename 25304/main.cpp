#include <iostream>
using namespace std;

int main()
{
    int total_cost = 0;
    cin >> total_cost;
    
    int N = 0;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        int cost = 0, cnt = 0;
        cin >> cost >> cnt;
        sum += cost * cnt;
    }
    if(sum == total_cost)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';

    return 0;
}