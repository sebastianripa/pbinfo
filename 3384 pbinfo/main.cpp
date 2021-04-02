#include <fstream>

using namespace std;

ifstream fin ("codjoc.in");
ofstream fout ("codjoc.out");

int main()
{
    int n, p = 10, cn;
    long long s;
    fin >> n;
    cn = n;
    s = n;
    while(n/p != 0)
    {
        s += (n%p);
        p *= 10;
    }
    fout << s;
    return 0;
}
