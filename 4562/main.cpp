#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T = 0;
    cin >> T;
    
    int zombie = 0, brain = 0;
    for(int i = 0; i < T; i++)
    {
        cin >> zombie >> brain;
        if(zombie < brain)
            cout << "NO BRAINS" << '\n';
        else
            cout << "MMM BRAINS" << '\n';
    }
    
    return 0;
}