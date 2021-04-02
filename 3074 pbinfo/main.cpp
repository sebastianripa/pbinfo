#include <iostream>

using namespace std;

int main()
{
    int n, s, nrc = 0, nrn = 0, nrmin = 1, nrmax = 0, i, ci;
    bool afisat = false;
    cin >> n >> s;
    while(n)
    {
        nrmin *= 10;
        nrmax = nrmax*10+9;
        n--;
    }
    nrmin /= 10;
    for(i = nrmin; i <= nrmax; i++)
    {
        ci = i;
        while(ci)
        {
            nrc += ci%10;
            ci /= 10;
        }
        if(nrc == s)
        {
            cout << i << " ";
            afisat = true;
            nrn++;
        }
        nrc = 0;
    }
    if(!afisat)
        cout << 0;
    else
    	cout << '\n' << nrn;
    return 0;
}
