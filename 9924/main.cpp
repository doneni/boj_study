#include <iostream>
using namespace std;

int main() 
{
    int A, B; cin >> A >> B;
    int ans = 0;
    while(A != B)
    {
      int tmp = max(A,B) - min(A,B);
      B = min(A,B);
      A = tmp;
      ans++;
    }
    cout << ans;
    return 0;
}
