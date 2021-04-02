#include <iostream>

using namespace std;

int main()
{
    float x;
    long long t, y, i, T = 0;
    cin >> x >> t >> y >> i;
    while(x >= y)
    {
        x = x-x/i;
        T++;
    }
    cout << T*t;
    return 0;
}
