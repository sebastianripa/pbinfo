#include <iostream>

using namespace std;

int main()
{
    int n, x, i, a, y;
    cin >> n >> x;
    a = y = x;
    for(i = 1; i < n; i++)
  {
        cin >> x;
        if(x > a)
        {
            y = a;
            a = x;
        }
        else if(x > y)
        {
            y = x;
        }
    }
    cout << a << " " << y;
    return 0;
}
