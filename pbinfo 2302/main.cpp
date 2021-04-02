#include <fstream>

using namespace std;

ifstream fin ("memory009.in");
ofstream fout ("memory009.out");

int v1[1000001],v2[1000001], vb[31];

int main()
{
    int a, b, i, j;
    fin >> a >> b;
    for(i = 1; i <= a; i++)
        fin >> v1[i];
    for(i = 1; i <= b; i++)
        fin >> v2[i];
    for(i = 1; i <= a; i++)
    {
        for(j = 1; j <= b; j++)
        {
            if(v1[i] == v2[j] && vb[v1[i]] == 0)
            {
                fout << v1[i] << " ";
                vb[v2[j]] = 1;
            }
        }
    }
    return 0;
}
