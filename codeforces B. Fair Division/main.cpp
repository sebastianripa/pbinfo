#include <iostream>

using namespace std;

int main()
{
    int t, n, x, nrb1 = 0, nrb2 = 0, i, j;
    cin >> t;
    for(j = 1; j <= t; j++)
    {
        cin >> n;
        nrb1 = 0;
        nrb2 = 0;
        for(i = 1; i <= n; i++)
        {
            cin >> x;
            if(x == 1)
                nrb1++;
            else
                nrb2++;
        }

        if(nrb2%2 == 0)
        {
            if(nrb1%2 == 0)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        else
        {
            if(nrb1%2 == 0)
            {
                if(nrb1 >= 2)
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
            else
                cout << "NO" << '\n';

        }
    }
    return 0;
}
