#include <iostream>
using namespace std;

int main(void)
{
    string in;
    cin >> in;
    
    int word = 0;
    for(size_t i = 0; i < in.size(); i++)
    {
        if(i == in.size() - 1)
        {
            word++;
            break;
        }
        if(in[i] == 'c')
        {
            if(in[i + 1] == '=' || in[i + 1] == '-')
                i++;
        }
        else if(in[i] == 'd')
        {
            if(in[i + 1] == '-')
                i++;
            else if(in[i + 1] == 'z' && i <= in.size() - 2 && in[i + 2] == '=')
                i += 2;
        }
        else if(in[i] == 'l' & in[i + 1] == 'j')
            i++;
        else if(in[i] == 'n' & in[i + 1] == 'j')
            i++;
        else if(in[i] == 's' & in[i + 1] == '=')
            i++;
        else if(in[i] == 'z' & in[i + 1] == '=')
            i++;
        word++;
    }
    cout << word << '\n';

    return 0;
}