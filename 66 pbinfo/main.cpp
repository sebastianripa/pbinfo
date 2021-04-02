#include <iostream>

using namespace std;

int main()
{
    long long n, nrc = 0;
    cin >> n;
    if(n == 0)
        cout << 1;
    else
    {
        while(n)
        {
            nrc++;
            n /= 10;
        }
        cout << nrc;
    }
    return 0;
}
