#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("sirmaxim.in");
ofstream fout ("sirmaxim.out");

int main()
{
    long long n, x, i, maxi = -1, nr = 0;
    fin >> n;
    for(i = 1; i <= n/2; i++)
    {
        fin >> x;
        if(x > maxi)
        {
            maxi = x;
        }
    }
    for(i = n/2 + 1; i <= n; i++)
    {
        fin >> x;
        if(maxi == x)
        {
            nr++;
        }
    }
    fout << nr;
    return 0;
}
