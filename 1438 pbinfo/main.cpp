#include <fstream>

using namespace std;

ifstream fin ("razboi.in");
ofstream fout ("razboi.out");

int v[100000];

int sumaDivizori(int n)
{
    if(n == 1)
        return 1;
    if(v[n] != 0)
        return v[n];
    int i, s = 1+n;
    for(i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
            s += i;
    }
    v[n] = s;
    return s;
}

int main()
{
    int n, l, x, i, nrs1 = 0, nrs2 = 0;
    fin >> n >> l;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        if(l == 1)
        {
            if(x%2 == 0)
                nrs1++;
            else
                nrs2++;
        }
        else
        {
            if(sumaDivizori(x)%2 == 0)
                nrs1++;
            else
                nrs2++;
        }
    }
    fout << nrs1 << " " << nrs2;
    return 0;
}
