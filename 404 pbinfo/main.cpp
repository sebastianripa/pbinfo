#include <iostream>

using namespace std;

bool ePrim(int n)
{
    int d = 2;
    if(n < 2)
    {
        return false;
    }
    while(d*d <= n)
    {
        if(n%d == 0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    int n, x, c = 0, i;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        if(ePrim(x))
        {
            while(x != 0)
            {
                c++;
                x /= 10;
            }
        }
    }
    cout << c << " ";
    return 0;
}
