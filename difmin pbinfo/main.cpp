#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, i, x, y, dif, dm = 1000000000, x1, x2, s = 0, sm = 10000000000;
    cin >> n >> x;
    for(i = 2; i <= n; i++)
    {
        cin >> y;
        if(x > y)
        {
            dif = x - y;
        }
        else
        {
            dif = y - x;
        }
        if(dm > dif)
        {
            dm = dif;
            x1 = x;
            x2 = y;
        }
        if(dm == dif)
        {
            s = x + y;
            if(sm > s)
            {
                sm = s;
                x1 = x;
                x2 = y;
            }
        }
        x = y;
    }
    cout << x1 << " " << x2;
    return 0;
}
