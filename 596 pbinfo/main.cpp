#include <fstream>

using namespace std;

ifstream fin ("numere2.in");
ofstream fout ("numere2.out");

int v[25001];

int main()
{
    long long n, nrz = 0, i, c = 1, x;
    fin >> n;
    fin >> v[1];
    for(i = 2; i <= n; i++)
    {
        fin >> x;
        if(v[c] == x)
        {
            v[c] = 0;
            c--;
            nrz++;
        }
        else
            v[++c] = x;
    }
    fout << nrz << '\n';
    for(i = 1; i <= c; i++)
        fout << v[i] << ' ';
    return 0;
}
