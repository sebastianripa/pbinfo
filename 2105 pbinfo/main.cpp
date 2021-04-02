#include <iostream>

using namespace std;

int main()
{
    int n, x, y, i, cx, nrcp = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> x >> y;
        cx = x;
        while(cx > 9)
            cx /= 10;
        if(x%10 == cx)
            nrcp++;
    }
    cout << nrcp;
    return 0;
}
