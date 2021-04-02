#include <iostream>

using namespace std;

int main()
{
    int n, x, i, mini, maxi;
    cin >> n >> x;
    mini = x;
    maxi = x;
    for(i = 0; i < n - 1; i++)
    {
        cin >> x;
        if(x > maxi)
        {
            maxi = x;
        }
        else if(mini > x)
        {
            mini = x;
        }
    }
    cout << maxi + mini;
    return 0;
}
