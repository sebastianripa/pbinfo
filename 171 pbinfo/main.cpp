#include <iostream>

using namespace std;

int v[10];

long long putere(int n)
{
    long long p = 1;
    while(n > 9)
    {
        p *= 10;
        n /= 10;
    }
    return p;
}

int main()
{
    int n, x, i, cmin = 10, p, pc;
    cin >> n;
    for(i = 1; i<= n; i++)
    {
        cin >> x;
        p = putere(x);
        pc = x/p;
        if(cmin >= pc)
        {
            cmin = pc;
            if(v[cmin] < x)
                v[cmin] = x;
        }
    }
    cout << v[cmin];
    return 0;
}
