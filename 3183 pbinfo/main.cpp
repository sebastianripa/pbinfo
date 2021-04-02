#include <iostream>

using namespace std;

int main()
{
    int n, x, y, p, a, b, i, r = 0, c = 0, u = 0;
    cin >> n >> x >> y >> p;
    if(p == 1)
    {
        for(i = 1; i <= n; i++)
        {
            cin >> a >> b;
            c += b;
            u += a;
            r = r + a - b;
        }
        cout << u << " " << c << " " << r;
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            cin >> a >> b;
            if(i <= x)
                r = r + a - b;
        }
        if(r >= y)
            cout << "DA";
        else
            cout << "NU";
    }
    return 0;
}
