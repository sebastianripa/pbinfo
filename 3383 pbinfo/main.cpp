#include <fstream>

using namespace std;

ifstream fin ("cifmaxmin.in");
ofstream fout ("cifmaxmin.out");

int main()
{
    int n, i, x, nrp = 0, nri = 0, cmini = 10, cminp = 10, cmaxi = 0, cmaxp = 0, nrimp = 0, nrpar = 0, nrmpar = 0, nrmimp = 100;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        if(x%2 == 0)
        {
            nrp++;
            while(x)
            {
                if(cminp > x%10)
                    cminp = x%10;
                if(cmaxp < x%10)
                    cmaxp = x%10;
                x /= 10;
            }
            nrpar = (nrpar*10 + cmaxp)*10 + cminp;
            if(nrmpar < nrpar)
                nrmpar = nrpar;
            nrpar = 0;
            cminp = 10;
            cmaxp = 0;
        }
        else
        {
            nri++;
            while(x)
            {
                if(cmini > x%10)
                    cmini = x%10;
                if(cmaxi < x%10)
                    cmaxi = x%10;
                x /= 10;
            }
            nrimp = (nrimp*10 + cmini)*10 + cmaxi;
            if(nrmimp > nrimp)
                nrmimp = nrimp
