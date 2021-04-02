#include <iostream>

using namespace std;

long long sumaCifre(long long n)
{
    int sc = 0;
    while(n)
    {
        sc = sc + n%10;
        n /= 10;
    }
    return sc;
}

int main()
{
    int n, sc, csc, i, nra = 0;
    cin >> n;
    sc = sumaCifre(n);
    csc = sc;
    while(sc >= 9)
    {
        cout << 9;
        sc -= 9;
        nra++;
    }
    if(sc > 0)
    {
        cout << sc;
        nra++;
    }
    for(i = 1; i <= csc-nra; i++)
        cout << 0;
    return 0;
}
