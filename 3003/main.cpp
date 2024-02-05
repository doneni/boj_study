#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int input[6] = { 0, };
    int ans[6] = { 1, 1, 2, 2, 2, 8};
    for(int i = 0; i < 6; i++)
    {
        cin >> input[i];
        cout << ans[i] - input[i] << " ";
    }
    return 0;
}