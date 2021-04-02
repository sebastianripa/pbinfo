#include <fstream>

using namespace std;

ifstream fin ("pozitiiconsecutive.in");
ofstream fout ("pozitiiconsecutive.out");

int main()
{
    int x, y, nrp;
    fin >> x >> y;
    nrp = y - x;
    while(y >= 0)
    {
        fout << y << " ";
        y -= nrp;
        nrp -= 2;
    }
    return 0;
}
