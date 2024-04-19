#include <iostream>
using namespace std;

int main(void)
{
    int N = 0, M = 0;
    string input;
    cin >> N >> M;
    cin >> input;

    int cnt = 0;
    for(size_t i = 0; i < input.size(); i++)
    {
        int k = 0;
        while(input[i] == 'I' && input[i + 1] == 'O' && input[i + 2] == 'I')
        {
            k++;
            if(k >= N)
                cnt++;
            i += 2;
        }
    }
    cout << cnt << '\n';
    return 0;   
}
