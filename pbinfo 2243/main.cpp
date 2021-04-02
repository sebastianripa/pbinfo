#include <iostream>

using namespace std;

int main()
{
    char c;
    unsigned long long ma = 0, n = 0;

    cin.get(c);
    while(c != '.')
    {
        ma += c;
        n++;
        cin.get(c);
    }
    ma /= n;
    c = ma;
    cout << c << '\n';

    return 0;
}
