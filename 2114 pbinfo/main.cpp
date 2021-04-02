#include <fstream>

using namespace std;

ifstream fin ("vapoare.in");
ofstream fout ("vapoare.out");

int main()
{
    long long a, b, z1, z2, x, y, cx, cy;
    fin >> a >> b >> z1 >> z2;
    x = (a*2)*7+z1;
    y = (b*2)*7+z2;
    cx = x;
    cy = y;
    while(cx != cy)
    {
        if(cx > cy)
            cx = cx - cy;
        else
            cy = cy - cx;
    }
    fout << (x*y)/cx;
    return 0;
}
