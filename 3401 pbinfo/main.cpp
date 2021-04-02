#include <fstream>

using namespace std;

ifstream fin ("spp.in");
ofstream fout ("spp.out");

long long spp(long long x, long long y)
{
    long long s = y * (y + 1) * (2*y + 1) / 6;
    s -= (x - 1) * x * (2*x - 1) / 6;
    return s;
}

int main()
{
    long long n, x, i, s, y, p, a, b;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> x >> p;

        a = x;
        b = p;

        do
        {
            y = (a + b) / 2;
            //y = a + 1;
            s = spp(x, y);

            if (s < p*p)
            {
                a = y;
            }
            else
            {
                b = y;
                //b = a;
            }
        } while(a != b);
        y = a;

        fout << y << '\n';
    }
    return 0;
}
