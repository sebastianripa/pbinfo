#include <fstream>

using namespace std;

ifstream fin ("vterminal.in");
ofstream fout ("vterminal.out");

int prim(int n)
{
    int i;
    if(n < 2)
        return false;
    for(i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, x, s = 0, i;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        if(prim(x))
            s += x;
    }
    if(s == 0)
        fout << 0;
    else if(s%9 == 0)
        fout << 9;
    else
        fout << s%9;
    return 0;
}
