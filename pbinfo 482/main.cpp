#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, x, y, nro = 0, d = 0, i;
    float v;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> x >> y;
        nro += x;
        d +=  y*x;
    }
    cout << d << " ";
    v = d/nro;
    cout << setprecision(4) << (float) d/nro;
    return 0;
}
