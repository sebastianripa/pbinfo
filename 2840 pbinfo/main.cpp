#include <fstream>

using namespace std;

ifstream fin ("subsecventauniforma.in");
ofstream fout ("subsecventauniforma.out");

int v[3];

int main()
{
    long long x, ogx, i, maxi = 0, nr = 1, y;
    fin >> x;
    ogx = x;
    while(fin >> x)
    {
        if(ogx == x)
            nr++;
        else
        {
            if(maxi <= nr)
            {
                maxi = nr;
                y = ogx;
            }
            nr = 1;
        }
        ogx = x;
    }
    if(nr != 1)
        if(maxi <= nr)
        {
            maxi = nr;
            y = ogx;
        }
    fout << maxi << '\n';
    if(maxi == 1)
        fout << x;
    else
        for(i = 1; i <= maxi; i++)
            fout << y << " ";
    return 0;
}
