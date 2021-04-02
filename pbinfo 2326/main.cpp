#include <iostream>

using namespace std;

int main()
{
    long long n, p = 0;
    cin >> n;
    while(n%2 == 0)
    {
        p++;
        n /= 2;
    }
    if(n == 1)
        cout << p;
    else
        cout << -1;
    return 0;
}
