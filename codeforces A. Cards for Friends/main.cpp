#include <iostream>

using namespace std;

int main()
{
    int t, w, h, n, nrf = 1, i;
    cin >> t;
    for(i = 1; i <= t; i++)
    {
        cin >> w >> h >> n;
        nrf = 1;
        while(w%2 == 0 && nrf < n)
        {
            nrf *= 2;
            w /= 2;
        }
        if(nrf >= n)
            cout << "YES" << '\n';
        else
        {
            while(h%2 == 0 && nrf < n)
            {
                nrf *= 2;
                h /= 2;
            }
            if(nrf >= n)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}
