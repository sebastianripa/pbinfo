#include <iostream>

using namespace std;

int main()
{
    int n, nrt = 0;
    cin >> n;
    while(n != 1)
    {
        nrt++;
        if(n%2 == 0)
            n /= 2;
        else
            n = 3*n + 1;
    }
    cout << nrt + 1;
    return 0;
}
