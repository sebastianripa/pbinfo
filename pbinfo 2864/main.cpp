#include <fstream>

using namespace std;

ifstream cin ("sotron.in");
ofstream cout ("sotron.out");

int main()
{
    long long n, m, p, c = 0, s, a;
    cin >> p >> n >> m;
    if(p == 1)
        cout << (n*n + n)/2;
    else
    {
        for(i = n, i >= 0; i -= 2)
        {
            c++;
            s += 2*i-1;
            if(s >= m)
                break;
        }
        a = s - i + 1;
        if(m > a)
        {
            r = n - c + 1;
            c += m - a;
        }
        else
            r = (n - c + 1) - (a - m);
        cout << r << ' ' << c;
    }
    return 0;
}
