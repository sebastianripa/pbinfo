#include <fstream>

using namespace std;

ifstream fin ("2prim.in");
ofstream fout ("2prim.out");

bool ePrim(int n)
{
    int d = 2;
    if(n < 2)
    {
        return false;
    }
    while(d*d <= n)
    {
        if(n%d == 0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    int n, i, x, nrp = 0;
    fin >> n;
    for(i = 0; i < n; i++)
    {
        fin >> x;
        if(ePrim(x%100) == true)
        {
            nrp++;
        }
    }
    fout << nrp;
    return 0;
}
