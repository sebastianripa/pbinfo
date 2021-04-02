#include <iostream>

using namespace std;

int main()
{
    int n, s = 1, i;
    cin >> n;
    for(i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
            s += i;
    }
    if(s == n)
        cout << n << " este perfect";
    else
        cout << n << " nu este perfect";
    return 0;
}
