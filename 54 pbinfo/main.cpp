#include <iostream>

using namespace std;

int main()
{
    int x, maxi = -1000000;
    cin >> x;
    if(x == 0)
        cout << "NU EXISTA";
    else
    {
        do
        {
            cin >> x;
            if(maxi < x)
            {
                maxi = x;
            }
        }
        while(x != 0);
        cout << maxi;
    }
    return 0;
}
