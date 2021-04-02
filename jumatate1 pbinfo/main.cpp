#include <fstream>
#include <math.h>

using namespace std;

ifstream fin ("jumatate1.in");
ofstream fout ("jumatate1.out");

int main()
{
    long long n, cn, x = 0, y = 0, nrc, f;
    fin >> n;
    cn = n;
    while(cn != 0)
    {
        nrc++;
        cn /= 10;
    }
    if(nrc%2 == 0)
        f = pow(10, p/2)
    else
        f = pow(10, (p + 1)/2)
    x = n/f;
    y = n%f;
    while(x != y)
    {
        if(x > y)
            x = x - y;
        else
            y = y - x;
    }
    fout << x;
    return 0;
}
