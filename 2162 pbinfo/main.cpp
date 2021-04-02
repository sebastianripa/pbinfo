#include <fstream>

using namespace std;

ifstream fin ("conturi.in");
ofstream fout ("conturi.out");

int main()
{
    int n, x, c, smax = 0, i;
    fin >> n >> x;
    for(i = 1; i <= n; i++)
    {
        fin >> c;
        if(c/100000 == x)
        {
            if((c/10000)%10 == 1)
            {
                if(smax < c%10000)
                    smax = c%10000;
            }
        }
    }
    fout << smax;
    return 0;
}
