#include <fstream>

using namespace std;

ifstream fin ("cifpagini.in");
ofstream fout ("cifpagini.out");

int main()
{
    int n, p, v, i, j, nrp = 0, s = 0, nrd = 0, k;
    fin >> n >> p >> v;
    for(i = p; i <= 100000; i++)
    {
        if(n > 0)
        {
            k = 0;
            for(j = 2; j*j <= i; j++)
            {
                if(i%j == 0)
                {
                    k++;
                    break;
                }
            }
            if(k == 0)
            {
                nrd += i;
                n--;
            }
        }
    }
    if(v == 1)
    {
        fout << nrd;
    }
    else
    {
        for(i = 1; i <= nrd; i++)
        {
            if(i < 10)
                nrp++;
            else if(i >= 10 && i < 100)
                nrp += 2;
            else if(i >= 100 && i < 1000)
                nrp += 3;
            else if(i >= 1000 && i < 10000)
                nrp += 4;
            else if(i >= 10000 && i < 100000)
                nrp += 5;
            else if(i >= 100000 && i < 1000000)
                nrp += 6;
            else if(i >= 1000000 && i < 10000000)
                nrp += 7;
            else if(i >= 10000000 && i < 100000000)
                nrp += 8;

        }
        fout << nrp;
    }
    return 0;
}
