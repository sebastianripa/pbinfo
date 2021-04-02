#include <iostream>

using namespace std;

int main()
{
    int n, m, i;
    cin >> n >> m;
    while(b)
    {
        r = a%b;
        a = b;
        b = r;
    }
    if(n == 1)
        cout << 1;
    else
    {
        for(i = 1; i <= n/2; i++)
            if(n%i == 0)
                cout << i << " ";
        cout << n;
    }
    return 0;
}
