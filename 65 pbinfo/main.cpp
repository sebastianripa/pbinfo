#include <iostream>

using namespace std;

int main()
{
    int n, p = 1;
    bool prod = false;
    cin >> n;
    while(n)
    {
        if((n%10)%2 == 1)
        {
            p *= (n%10);
            prod = true;
        }
        n /= 10;
    }
    if(!prod)
        cout << -1;
    else
        cout << p;
    return 0;
}
