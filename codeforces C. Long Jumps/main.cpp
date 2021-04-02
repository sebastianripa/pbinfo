#include <iostream>

using namespace std;

int a[200001];

int main()
{
    int t, n, sm = 0, i, j;
    cin >> t;
    for(j = 1; j <= t; j++)
    {
        cin >> n;
        sm = 0;
        for(i = 1; i <= n; i++)
            cin >> a[i];
        for(i = n; i >= 1; i--)
        {
            if(i+a[i] <= n)
                a[i] = a[i+a[i]] + a[i];
            if(sm < a[i])
                sm = a[i];
        }
        cout << sm << '\n';
    }
    return 0;
}
