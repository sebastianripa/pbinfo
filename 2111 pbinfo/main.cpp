#include <fstream>

using namespace std;

ifstream fin ("centrale.in");
ofstream fout ("centrale.out");

int main()
{
    int n, x, nrc = 0, i, c;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
    fin >> x;
    x /= 10;
    c = x%10;
    x /= 10;
    while(x > 9)
    {
        if(x%10 != c)
            break;
        c = x%10;
        x /= 10;
    }
    if(x <= 9)
        nrc++;
    }
    fout << nrc;
    return 0;
}
