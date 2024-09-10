#include <iostream>
using namespace std;

int main(void)
{
    int sum = 0;
    int in;
    for(int i = 0; i < 5; i++) 
    {
        cin >> in;
        sum += in;
    }
    cout << sum;
}
