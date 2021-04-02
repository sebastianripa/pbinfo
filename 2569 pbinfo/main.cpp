#include <fstream>

using namespace std;

ifstream fin ("alo.in");
ofstream fout ("alo.out");

int nrc(int n)
{
    int p = 1;
    while(n)
    {
        p *= 10;
        n /= 10;
    }
    return p/10;
}

int main()
{
    int e, n, x, d, i, p;
    fin >> e >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> x >> d;
        if(x%10 == 5)
        {
            if(x/nrc(x) == 1)
                e = e - d*2;
            else
                e += d;
        }
    }
    fout << e;
    return 0;
}
