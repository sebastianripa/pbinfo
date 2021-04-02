#include <iostream>

using namespace std;

int v[11];

int main()
{
    int n, m = 0, x, i, nrc = 0, j;
    cin >> n;
    for(i = 1; i <= n/2; i++)
        cin >> v[i];
    for(i = 1; i <= n/2; i++)
    {
        cin >> x;
        for(j = 1; j <= n/2; j++)
        {
            if(x <= v[j])
                break;
        }
        if(j == n/2+1)
            nrc++;
    }
    cout << nrc;
    return 0;
}
