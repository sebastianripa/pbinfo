#include <iostream>

using namespace std;

int main()
{
    long long n, cn, maxi = -1, nr = 0;
    cin >> n;
    cn = n;
    while(n)
    {
        nr++;
        long long p = 1, r = 0, x = cn, i = 1;
        while(x)
        {
            if(i != nr)
                r += p*(x%10), p *= 10;
            i++;
            x /= 10;
        }
        if(r > maxi)
            maxi = r;
        n /= 10;
    }
    cout << maxi;
    return 0;
}
