#include<iostream>
using namespace std;

int main()
{
    int L = 0, P = 0;
    int arr[5] = { 0, };
    cin >> L >> P;
    
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        cout << arr[i] - L * P << endl;
    }
    
    return 0;
}