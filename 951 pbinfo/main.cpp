#include <iostream>

using namespace std;

int main()
{
    long long n, k, p, nrk = 0, onr1, onr2, onr3, nr, i;
    cin >> n >> k >> p;
    p = p%124;
    onr3 = 1;
    onr2 = 1;
    onr1 = 2;
    if(k == 1)
        nrk = 2;
    else if(k == 2)
        nrk = 1;
    for(i = 4; i <= n; i++)
    {
        nr = (onr1 + onr2 + onr3)%10;
        if(nr == k)
            nrk++;
        onr3 = onr2;
        onr2 = onr1;
        onr1 = nr;
    }
    cout << nrk << '\n';
    if(p == 1 || p == 2)
        cout << 1;
    else if(p == 3)
        cout << 2;
    else
    {
        onr3 = 1;
        onr2 = 1;
        onr1 = 2;
        for(i = 4; i <= p; i++)
        {
            nr = (onr1 + onr2 + onr3)%10;
            onr3 = onr2;
            onr2 = onr1;
            onr1 = nr;
        }
        cout << nr;
    }
    return 0;
}
