#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    long long G, T, A, D;
    long long X = 0, Y = 0, round2 = 0;
    while(true)
    {
        cin >> G >> T >> A >> D;
        if(G == -1 && T == -1 && A == -1 && D == -1)
            break;
        round2 = G * A + D;
        Y = 0;
        for(int i = 1; i < round2; i++)
        {
            if(pow(2, i) == round2)
                break;
            if(pow(2, i) > round2)
            {
                Y = pow(2,i) - round2;
                round2 = pow(2, i);
                break;
            }
        }
        X = T * (T-1) / 2 * G + round2 - 1;
        cout << G << '*' << A << '/' << T << '+' << D << '=' << X << '+' << Y << '\n';
    }
}
