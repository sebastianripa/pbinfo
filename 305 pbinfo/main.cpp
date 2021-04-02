#include <iostream>

using namespace std;

int main()
{
    int a, b, x, y;
    fin >> a >> b;
    x = a;
    y = b;
    while(x!=y)
    {
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }
    cout << (a*b)/x;
    return 0;
}
