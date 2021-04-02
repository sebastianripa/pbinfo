#include <iostream>

using namespace std;

int main()
{
    int n, x, y, p, difm = 1001, i;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> x >> y;
        if(difm >= max(x, y) - min(x, y))
        {
            difm = max(x, y) - min(x, y);
            p = i;
        }
    }
    cout << p;
    return 0;
}
