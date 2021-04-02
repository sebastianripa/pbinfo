#include <fstream>

using namespace std;

ifstream fin ("numere3.in");
ofstream fout ("numere3.out");

long long sumaCifrea(long long n)
{
    int s = 0;
    while(n != 0)
    {
        s += n%10;
        n /= 10;
    }
    return s;
}

long long sumaCifrec(long long n)
{
    int s = 0;
    while(n != 0)
    {
        s += n%10;
        n /= 10;
    }
    return s;
}

int main()
{
    long long p, a, b, c, s = 0;
    fin >> p >> a >> b >> c;
    if(p == 1)
    {
        s += sumaCifrea(a);
        while(b != 0)
        {
            s += b%10;
            b /= 10;
        }
        s += sumaCifrea(c);
        fout << s;
    }
    else
    {
        fout << a << " " << c << '\n';
        while(a < b && c > b)
        {
            a += sumaCifrea(a);
            c -= sumaCifrec(c);
            fout << a << " " << c << '';
        }
        if(a >= b && c <= b)
            fout << 0;
        else if(c <= b)
            fout << 2;
        else
            fout << 1;
    }
    return 0;
}
