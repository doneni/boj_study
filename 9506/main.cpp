#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N;
    while(true)
    {
        cin >> N;
        if(N == -1)
            break;
        int sum = 1;
        vector<int> n;
        for(int i = 2; i < N; i++)
        {
            if(N % i == 0)
            {
                sum += i;
                n.push_back(i);
            }
        }
        if(N == sum)
        {
            cout << N << " = 1";
            for(const auto& e : n)
                cout << " + " << e; 
        }
        else
            cout << N << " is NOT perfect.";
        cout << '\n';
    }
    return 0;
}
