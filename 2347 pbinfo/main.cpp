#include <iostream>

using namespace std;

int nrd(int n)
{
    int nrd = 0, i;
    for(i = 1; i <= n/2; i++)
        if(n%i == 0)
            nrd++;
    return nrd;
}

int main()
{
    int n, x, i, nrdiv, ognrdiv, nrdd = 0, nrsdd = 0;
    cin >> n;
    cin >> x;
    nrdiv = nrd(x);
    for(i = 2; i <= n; i++)
    {
        ognrdiv = nrdiv;
        cin >> x;
        nrdiv = nrd(x);
        if(ognrdiv > nrdiv)
            nrdd++;
        else if(nrdd >= 2)
            nrsdd++;
        else
            nrdd = 0;
    }
    cout << nrsdd;
    return 0;
}
