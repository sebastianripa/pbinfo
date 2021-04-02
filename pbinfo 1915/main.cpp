#include <iostream>

using namespace std;

int main()
{
    int n, b, r, nr, i = 2, nrc = 0, nrm = 1;
    cin >> n >> b >> r;
    while(n)
    {
        nrm *= 10;
        n--;
    }
    nrm /= 10;
    if(nrm % b != 0)
    {
        nrm = nrm + nrm%b;
        nrm += r;
    }
    cout << nrm;
    cout << " " << 10005%97;
    return 0;
}
