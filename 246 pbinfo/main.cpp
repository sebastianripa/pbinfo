#include <iostream>

using namespace std;

int main()
{
    int n, x, max1 = 0, max2 = 0, i;
     cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        if(x%2 == 1)
        {
           max2 = max1;
           max1 = x;
        }
    }
    if(max2 != 0)
        cout << max2 << " " << max1;
    else
        cout << "Numere insuficiente";
    return 0;
}
