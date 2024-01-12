#include <iostream>
#define MAX 1000001
using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int start = 0, end = 0;
    int arr[MAX] = {0, };
    cin >> start >> end;
    for (int i = 2; i < end + 1; i++)
        arr[i] = i;

    for (int i = 2; i < end + 1; i++)
    {
        if(arr[i])
            for(int j = i * 2; j < end + 1; j+=i)
                arr[j] = 0;
        else
            continue;
    }
    
    for (int i = start; i < end + 1; i++)
        if(arr[i])
            cout << i << '\n';

    return 0;
}