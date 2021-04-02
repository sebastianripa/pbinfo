#include <iostream>

using namespace std;

int v[100];

int main()
{
    int n, nrs = 0, i, s = 0, nr = 1, a = 0;
    cin >> n;
    cn = n;
    if(n%2 == 0)
        cout << n/2 << '\n';
    else
        cout << n/2+1 << '\n';
    while(n > 0)
    {
        for(i = 1; i <= nr-1; i++)
            cout << i;
        for(i = 1; i <= n; i++)
            cout << nr;
        for(i = nr - 1; i >= 1; i--)
            cout << i;
        s += (nr*(n*n));
        if(n > 2)
        {
            a++;
            v[a] = nrs;
        }
        if(nrs == 0)
        {
            nrs += 1;
            nrs *= 2;
            n -= nrs;
        }
        else
        {
            n -= nrs;
            nrs *= 2;
        }
        nr++;
        cout << '\n';
    }
    while(n > 0)
    {
        for(i = 1; i <= nr-1; i++)
            cout << i;
        for(i = 1; i <= n; i++)
            cout << nr;
        for(i = nr - 1; i >= 1; i--)
            cout << i;
        if(n > 2)
        {
            a++;
            v[a] = nrs;
        }
        if(nrs == 0)
        {
            nrs += 1;
            nrs *= 2;
            n -= nrs;
        }
        else
        {
            n -= nrs;
            nrs *= 2;
        }
        nr++;
        cout << '\n';
    }
    cout << s;
    return 0;
}
