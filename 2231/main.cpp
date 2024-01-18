#include <iostream>
using namespace std;

int main(void)
{
    int n = 0;
    cin >> n;
    int min = 0;
    
    for (int i  = 1; i < n + 1; i++)
    {
        int gen = i;
        int num = i;
        do
        {
            gen += num % 10;
            num /= 10;
        } while(num);
        
        if (gen == n)
            min = (i < min || min == 0) ? i : min;
    }
    
    cout << min << '\n';
    
    return 0;
}
