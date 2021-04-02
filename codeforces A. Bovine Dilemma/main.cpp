#include <iostream>

using namespace std;

int v[100], vd[100];

int main()
{
    int t, n, i, j, nrad, x, ogx, dif, k;
    cin >> t;
    for(k = 1; k <= t; k++)
    {
        cin >> n;
        nrad = 0;
        for(i = 1; i <= 50; i++)
            vd[i] = 0;
        for(i = 1; i <= n; i++)
            cin >> v[i];
        for(i = 1; i <= n; i++)
        {
            for(j = i + 1; j <= n; j++)
            {
                dif = max(v[i], v[j]) - min(v[i], v[j]);
                if(vd[dif] == 0)
                {
                    nrad++;
                    vd[dif] = 1;
                }
            }
        }
        cout << nrad << '\n';
    }
    return 0;
}
