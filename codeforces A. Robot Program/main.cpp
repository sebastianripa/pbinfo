#include <iostream>

using namespace std;

int main()
{
    int t, x, y, i, j, rasp;
    cin >> t;
    for(j = 1; j <= t; j++)
    {
        cin >> x >> y;
        rasp = x + y;
        if(x != y)
            rasp = rasp + max(x, y) - min(x, y) - 1;
        cout << rasp << '\n';
    }
    return 0;
}
