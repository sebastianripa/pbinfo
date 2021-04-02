#include <iostream>

using namespace std;

int main()
{
    long long n, k, p = 0;
    cin >> n >> k;
    while(n > 1)
    {
        p++;
        n /= 10;
    }
    cout << 1;
    k *= p;
    for(int i = 1; i <= k; i++)
        cout << 0;
    return 0;
}
