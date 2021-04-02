#include <iostream>

using namespace std;

int main()
{
    long long n, a = 1, b = 1, c;
    cin >> n;
    if(n == 1)
        cout << 1 << " " << 1;
    else
    {
        cout << a << " " << b << " ";
        c = a + b;
        while(c <= n)
        {
            c = a + b;
            if(c <= n)
                cout << c << " ";
            a = b;
            b = c;

        }
    }
    return 0;
}
