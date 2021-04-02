#include <iostream>

using namespace std;

int main()
{
    long long n, c, cc, x, i, nc = 1;
    cin >> n >> c;
    cc = c;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        if(x > c)
        {
            c = cc;
            nc++;
            c -= x;
        }
        else
        	c -= x;
    }
    cout << nc;
    return 0;
}
