#include <fstream>

using namespace std;

ifstream fin ("comori1.in");
ofstream fout ("comori1.out");

int main()
{
    int n, x, ogx, i;
    bool verif = false;
    fin >> n >> x;
    for(i = 2; i <= n; i++)
    {
        ogx = x;
        fin >> x;
        if(ogx > x)
        {
            fout << i << " ";
            verif = true;
        }
    }
    if(!verif)
        fout << 0;
    return 0;
}
