#include <fstream>

using namespace std;

ifstream fin ("smartphone.in");
ofstream fout ("smartphone.out");

int v[10001];

int main()
{
    int c, n, x, nrmax = 0, i ,nrmax2 = 0;
    fin >> c >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> v[i];
        if(nrmax < v[i])
            nrmax = v[i];
    }
    if(c == 1)
        fout << nrmax;
    else
    {
        for(i = 1; i <= n; i++)
        {
            if(nrmax2 < v[i] && v[i] != nrmax)
                nrmax2 = v[i];
        }
        fout << nrmax2;
    }
    return 0;
}
