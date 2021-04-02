#include <iostream>
#include <algorithm>

using namespace std;

int v[200001];

int main()
{
    int n, x, i, nrmm = 0, p;
    cin >> n >> x;
    for(i = 1; i <= n; i++)
    {
        cin >> p;
        if(p > x)
            nrmm++;
    }
    cout << nrmm+1;
    return 0;
}
