#include <iostream>

using namespace std;

int main()
{
    int a, b, ca, cb;
    cin >> a >> b;
    ca = a;
    cb = b;
    while(ca != cb)
    {
        if(ca > cb)
            ca = ca - cb;
        else
            cb = cb - ca;
    }
    cout << a*b/(ca*ca) << ' ';
    cout << ca;
    return 0;
}
