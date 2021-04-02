#include <fstream>

using namespace std;

ifstream fin ("porumb.in");
ofstream fout ("porumb.out");

int main()
{
    int n, x, i, primulPorumb = 1, y = 1, nrPorumbiRamasi, nrAgri = 0, pas = 2, upc = 1;
    bool afisat = false;
    fin >> n >> x;
    nrPorumbiRamasi = n;
    while(nrPorumbiRamasi != 1)
    {
        nrPorumbiRamasi = 0;
        for(i = primulPorumb; i <= n; i += pas)
        {
            nrPorumbiRamasi++;
            upc = i;
            if(x == i && !afisat)
                afisat = true;
        }
        if(!afisat)
            y++;
        nrAgri++;
        primulPorumb *= 2;
        pas *= 2;
    }
    fout << (n/2 + n%2) << '\n';
    fout << nrAgri << '\n';
    fout << y << '\n';
    fout << upc*2;
    return 0;
}
