#include <fstream>

using namespace std;

ifstream fin ("numere25.in");
ofstream fout ("numere25.out");

int main()
{
    int n, i, start = 0, stop, ok = 0;
    fin >> n;
    while(fin >> stop)
    {
        for(i = start+1; i < stop; i++)
        {
            fout << i << " ";
            ok = 1;
        }
        start = stop;
    }
    for(i = stop+1; i <= n; i++)
        {
            fout << i << " ";
            ok = 1;
        }
    if(ok == 0)
        fout << "Nu exista";
    return 0;
}
