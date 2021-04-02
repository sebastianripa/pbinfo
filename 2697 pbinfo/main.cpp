#include <iostream>

using namespace std;

long long divizori(long long n)
{
    while(n%2 == 0)
        n /= 2;
    return n;
}

int main()
{
    long long n, x, i;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        cout << divizori(x) << " ";
    }
    return 0;
}
