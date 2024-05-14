#include <iostream>
using namespace std;

int main()
{
    int ham[3] = { 0, };
    int drink[2] = { 0, };
    for(int i = 0; i < 3; i++)
        cin >> ham[i];
    for(int i = 0; i < 2; i++)
        cin >> drink[i];
    int total = min(min(ham[0], ham[1]), ham[2]) + min(drink[0], drink[1]);
    cout << total - 50 << endl;
    return 0;
}
