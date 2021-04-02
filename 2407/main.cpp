#include <iostream>

using namespace std;

ifstream fin ("odaoni.in");
ofstream fout ("odaoni.out");

int main()
{
    int n, i ,nrd = 1, cn;
    fin >> n;
    cn = n;
    for(i = 1; i < n/2; i++)
    {
        if(n%i == 0)
        {
            while(n != 0)
            {
                if(n%10 == i)
                {
                    nrd++;
                    break;
                }
                n /= 10;
            }
            n = cn;
        }
    }
    fout << nrd;
    return 0;
}
