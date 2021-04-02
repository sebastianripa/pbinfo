#include <iostream>

using namespace std;

int main()
{
    long long n, sp = 0, sci = 0, scd3 = 0, nrc5 = 0, pc = 1, cuppc = 0, c, aux, ok = 0, p = 1;
    cin >> n;
    cuppc += n%10;
    aux = n;
    while(n)
    {
        c = n%10;
        sp = sp + c*c;
        if(c%2 == 1)
            sci += c;
        if(c%3 == 0)
            scd3 += c;
        if(c > 5)
            nrc5++;
        if(c > 0)
            pc *= c;
        ok++;
        n /= 10;

    }
    while(ok)
    {
        p *= 10;
        ok--;
    }
    p /= 10;
    cout << sp << " " << sci << " " << scd3 << " " << nrc5 << " " << pc << " " << cuppc+aux/p;
    return 0;
}
