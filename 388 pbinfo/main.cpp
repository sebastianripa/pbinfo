#include <iostream>

using namespace std;

int main()
{
    long long n, i, nrdp = 0;
    cin >> n;
    for(i = 1; i*i < n; i++)
    {
        if(n%i == 0 && i%2 == 0)
            nrdp++;
        if((n/i)%2 == 0 && n%(n/i) == 0)
            nrdp++;
    }
    if(i*i == n && i%2 == 0)
        nrdp++;
    cout << nrdp;
    return 0;
}
