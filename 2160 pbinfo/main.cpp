#include <fstream>

using namespace std;

ifstream fin ("prize.in");
ofstream fout ("prize.out");

int main()
{
    long long n, x, s = 0, i;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        s += (x - 1);
        if(i == n)
            s++;
    }
    fout << s;
    return 0;
}
