#include <iostream>

using namespace std;

int n, c, s, i, x, max1, min1, x1, smax = -1, smin = 1000;

int main()
{
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        s = 0;
        x1 = x;
        while(x != 0)
        {
            c = x%10;
            x = x/10;
            s += c;
        }
        if(s > smax)
        {
            smax = s;
            max1 = x1;
        }
        else if(s < smin)
        {
            smin = s;
            min1 = x1;
        }
        x = x1;
    }
    cout << max1 << endl;
    cout << min1;
    return 0;
}
