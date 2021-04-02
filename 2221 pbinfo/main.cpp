#include <iostream>

using namespace std;

int main()
{

    int nrc = 0, c, n, r;
    cin >> n;
    r = n%3;
    while(n != 0)
    {
        c = n%10;
        if(c%3 == r)
        {
            nrc++;
        }
        n = n/10;
    }
    cout << nrc;
    return 0;
}
