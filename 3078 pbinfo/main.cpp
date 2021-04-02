#include <iostream>

using namespace std;

int main()
{
    long long n;
    int k, p = 1, cont = 0;
    bool i = false;
    cin >> n >> k;
    while(n)
    {
        if(n%10 != k)
        {
            p *= (n%10);
            cont++;
        }
        else
            i = true;
        n /= 10;
    }
    if(!i)
        cout << 0;
    else if(cont == 0)
        cout << 0;
    else
        cout << p;
    return 0;
}
