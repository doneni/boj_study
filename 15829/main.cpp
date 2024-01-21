#include <iostream>
#define MAX 50
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    char arr[MAX] = { 0, };
    int n = 0;
    cin >> n;

    unsigned long long r = 1;
    unsigned long long m = 1234567891;
    unsigned long long hash = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hash += (((unsigned long long)(arr[i]) - 96) * r) % m;
        r = (r * 31) % m;
    }
    cout << hash % m << endl;

    return 0;
}