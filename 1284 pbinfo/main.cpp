#include <iostream>

using namespace std;

int main()
{
    int n, nr = 1, p = 0, y = 9;
    cin >> n;
    while(n >= y*nr)
    {
       n -= y*nr;
       p += y;
       y *= 10;
       nr++;
    }
    p += n/nr;
    cout << p;
    return 0;
}
