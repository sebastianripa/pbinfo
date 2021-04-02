#include <fstream>

using namespace std;

ifstream fin ("maxcadou.in");
ofstream fout ("maxcadou.out");

unsigned long long vf[10];

int main()
{
    unsigned long long n, i;
    fin >> n;
    while(n)
    {
        vf[n%10]++;
        n /= 10;
    }
    for(i = 9; i >= 1; i--)
    {
        while(vf[i] > 0)
        {
            fout << i;
            vf[i]--;
        }
    }
    return 0;
}
