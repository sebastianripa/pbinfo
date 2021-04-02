#include <iostream>

using namespace std;

int main()
{
    int c, n, ogx, x, m = 0, s = 0, i;
    cin >> c >> n >> x;
    for(i = 2; i <= n; i++)
    {
        cin >> x;
        if(c == 1)
        {
            if(ogx%2 == 0)
                s++;
            if(x%2 == 1)
            {
                if(m < s)
                {
                    m = s;
                    s = 0;
                }
            }
        }
        else
        {
            if(s == 0)
                s = ogx;
            if(ogx > x)
                s += x;
            else
            {
                if(m < s)
                {
                    m = s;
                    s = 0;
                }
            }
        }
    }
    cout << m;
    return 0;
}
