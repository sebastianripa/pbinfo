#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x, y, z, m;
    cin >> x >> y >> z;
    m = (x+y+z)/3;
    cout << setprecision(2) << fixed << m;
    return 0;
}
