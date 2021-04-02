#include <iostream>

using namespace std;

int inv(int n)
{

    int inv = 0;
    while(n)
    {
        inv = inv*10+n%10;
        n /= 10;
    }
    return inv;
}

int main()
{
    int a, b, nr1 = 0, nr2 = 0, c, ca, cb;
    cin >> a >> b;
    ca = a;
    cb = b;
    if(ca%2 == 0)
    {
        while(ca)
        {
            c = ca%10;
            if(c%2 == 0)
                nr1 = nr1*10+c;
            ca /= 10;
        }
        nr1 = inv(nr1);
    }
    else
    {
        while(ca)
        {
            c = ca%10;
            if(c%2 == 1)
                nr1 = nr1*10+c;
            ca /= 10;
        }
        nr1 = inv(nr1);
    }
    if(cb%2 == 0)
    {
        while(cb)
        {
            c = cb%10;
            if(c%2 == 0)
                nr2 = nr2*10+c;
            cb /= 10;
        }
        nr2 = inv(nr2);
    }
    else
    {
        while(cb)
        {
            c = cb%10;
            if(c%2 == 1)
                nr2 = nr2*10+c;
            cb /= 10;
        }
        nr2 = inv(nr2);
    }
    if(nr1 > nr2)
        cout << a;
    else if(nr2 > nr1)
        cout << b;SDFVB VCXZSCVB VCXZSAzX
    else
    {
        if(a > b)
            cout << a;
        else
            cout << b;
    }
    return 0;
}
