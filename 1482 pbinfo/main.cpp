#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("numar4.in");
ofstream fout ("numar4.out");

int main()
{
    int nrp = 5, s = 0, n;
    fin >> n;
    while(n != 0)
    {
        if(n%2 == 0)
        {
            nrp--;
        }
        s += nrp;
        n /= 10;
        nrp = 5;
    }
    fout << s;
    return 0;
}
