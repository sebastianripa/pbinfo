#include <fstream>

using namespace std;

ifstream fin ("parcare.in");
ofstream fout ("parcare.out")

int main()
{
    int z1, l1, h1, m1, z2, l2, h2, m2, t, c, m = 0, h;
    fin >> z1 >> l1 >> h1 >> m1 >> z2 >> l2 >> h2 >> m2 >> t >> c;
    if(z1 - z2 == 0)
    {
        m = (h2 - (h1+1))*60;
        m += m2;
        m += (60 - m1);
        if(c == 1 && m > 15)
            fout << m;
        else if(m > 15)
            fout << (m/60+1)*t;
        else
            fout << 0;
    }
    else
    {
         h = 24 - h1 - 1;
         h *= 60;
         if(z2)
    }
    return 0;
}
