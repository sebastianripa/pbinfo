#include <iostream>
#include <algorithm>

using namespace std;

int v[200001];

int main()
{
    long long t, n, scj1, scj2, i, j;
    cin >> t;
    for(j = 1; j <= t; j++)
    {
        cin >> n;
        scj1 = 0;
        scj2 = 0;
        for(i = 1; i <= n; i++)
            cin >> v[i];
        sort(v+1, v+n+1);
        for(i = n; i >= 1; i--)
        {
            if((n-i+1)%2 == 1)
            {
                if(v[i]%2 == 0)
                    scj1 += v[i];
            }
            else
            {
                if(v[i]%2 == 1)
                    scj2 += v[i];
            }
        }
        if(scj1 > scj2)
            cout << "Alice" << '\n';
        else if(scj1 < scj2)
            cout << "Bob" << '\n';
        else
            cout << "Tie" << '\n';
    }
    return 0;
}
