#include <iostream>
#include <vector>
#define MAX 1001
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n = 0;
    int tmp = 0, ans = 0;
    int prime[MAX] = { 0, };
    cin >> n;
    vector<int> input;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        // if(tmp > max) 
        //     max = tmp;
        input.push_back(tmp);
    }
    
    for (int i = 2; i < MAX + 1; i++)
        prime[i] = i;

    for (int i = 2; i < MAX + 1; i++)
    {
        if(prime[i])
            for(int j = i * 2; j < MAX + 1; j+=i)
                prime[j] = 0;
        else
            continue;
    }
    
    for(int i = 0; i < n; i++)
    {
        if(prime[input[i]])
            ans++;
    }
    cout << ans << '\n';

    return 0;
}