#include <iostream>

using namespace std;

int main()
{
    int t, n, j, i;
    cin >> t;
    for(j = 1; j <= t; j++)
    {
        cin >> n;
        if(n%2 == 1)
        {
            for(i = n; i >= 1; i--)
            {
                if(i == n/2+1)
                    cout << i-1 << " ";
                else if(i == n/2)
                    cout << i+1 << " ";
                else
                    cout << i << " ";
            }
        }
        else
        {
            for(i = n; i >= 1; i--)
                cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}
