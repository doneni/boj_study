#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    while(true)
    {
        string pw = ""; cin >> pw;
        if(pw == "end")
            break;
        cout << '<' << pw << "> "; 
        bool v[pw.length()] = { 0, };
        bool verbal = false;
        for(int i = 0; i < pw.length(); i++)
        {
            if(pw[i] == 'a' || pw[i] == 'e' || pw[i] == 'i' || pw[i] == 'o' || pw[i] == 'u')
            {
                v[i] = true;
                verbal = true;
            }
        }
        if(verbal)
        {
            if(pw.length() == 1)
                cout << "is acceptable.\n";
            for(int i = 1; i < pw.length(); i++)
            {
                if((pw[i] == pw[i-1]) && (pw[i] != 'e' && pw[i] !='o'))
                {
                    cout << "is not acceptable.\n";
                    break;
                }
                if(i > 1 && v[i] == v[i-1] && v[i-1] == v[i-2])
                {
                    cout << "is not acceptable.\n";
                    break;
                }
                if(i == pw.length()-1)
                    cout << "is acceptable.\n";
            }
        }
        else
            cout << "is not acceptable.\n";
    }
    return 0;
}
