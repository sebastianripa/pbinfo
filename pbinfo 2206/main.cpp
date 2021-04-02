#include <iostream>

using namespace std;

int main()
{
    int x, inv = 0, nr = 0;
    cin >> x;
    while(x)
    {
        if((x%10)%2 == 0)
        {
            if(x%10 != 0 && x/10 != 0)
                nr = nr*10+(x%10-1);
            else
                nr = nr*10+(x%10+1);
        }
        else
            nr = nr*10 + x%10;
        x /= 10;
    }
    while(nr)
    {
        inv = inv*10+nr%10;
        nr /= 10;
    }
    cout << inv;
    return 0;
}
