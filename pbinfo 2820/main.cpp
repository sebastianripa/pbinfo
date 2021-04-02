#include <fstream>

using namespace std;

ifstream fin ("sir11.in");
ofstream fout ("sir11.out");

int main()
{
    int n, nr;
    fin >> n;
    if(n%2 == 0)
    {
        nr = n/2;
        while(nr != 0)
        {
            fout << "-" << nr << " " << nr << " ";
            nr--;
        }
    }
    else
    {
        nr = (n+1)/2;
        while(nr)
        {
            if(nr == (n+1)/2)
                fout << nr << " ";
            else
                fout << "-" << nr << " " << nr << " ";
            nr--;
        }
    }
    return 0;
}
