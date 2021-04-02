#include <fstream>

using namespace std;

ifstream fin ("suma6.in");
ofstream fout ("suma6.out");

int inv(int n)
{
    int in = 0;
    while(n != 0)
    {
        in = in*10+n%10;
        n /= 10;
    }
    return in;
}

int main()
{
    int n, x, cx, i, j, s = 0, ix, nrc;
    fin >> n;
    for(i = 0; i < n; i++)
    {
        nrc = 0;
        fin >> x;
        cx = x;
        while(cx != 0)
        {
            nrc++;
            cx /= 10;
        }
        ix = inv(x);
        if(ix%10 == x%10)
        {
            nrc /= 2;
            for(j = 0; j < nrc; j++)
                x /= 10;
            s += x%10;
        }
    }
    fout << s;
    return 0;
}
