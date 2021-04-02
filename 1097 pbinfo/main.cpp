#include <fstream>

using namespace std;

ifstream fin ("vistiernic.in");
ofstream fout ("vistiernic.out");

int main()
{
    long long n, x, i, nrz1 = 0, nrz2 = 0;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        while(x%5 == 0)
        {
            nrz1++;
            x /= 5;
        }
        while(x%2 == 0)
        {
            nrz2++;
            x /= 2;
        }
    }

    fout << min(nrz1, nrz2);
    return 0;
}
