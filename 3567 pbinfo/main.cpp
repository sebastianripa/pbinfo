#include <fstream>

using namespace std;

ifstream fin ("cod24.in");
ofstream fout ("cod24.out");

int main()
{
    int n = 0, uc, puc, cn, inv = 0;
    fin >> cn;
    while(cn)
    {
        uc = cn%10;
        if(uc != 9)
            uc++;
        n = n*10 + uc;
        cn /= 10;
    }
    while(n)
    {
        inv = inv*10 + n%10;
        n /= 10;
    }
    uc = inv%10;
    inv /= 10;
    puc = inv%10;
    inv /= 10;
    inv = inv*10+uc;
    inv = inv*10+puc;
    fout << inv;
    return 0;
}
