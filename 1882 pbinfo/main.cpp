#include <fstream>

using namespace std;

ifstream fin ("calcul3.in");
ofstream fout ("calcul3.out");

int main()
{
    int n, s;
    char c;
    fin >> n;
    fin.get(c);
    fout << n;
    fout << c;
    s = n;
    while(fin >> n)
    {
        fout << n;
        if(c == '+')
            s += n;
        else
            s -= n;
        fin.get(c);
        fout << c;
    }
    fin.get(c);
    fout << s;
    return 0;
}
