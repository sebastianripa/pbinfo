#include <iostream>

using namespace std;

int main()
{
    long long n, mini, i, x;
    cin >> n >> x;
    mini = x;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        if(mini > x)
        {
            mini = x;
        }
    }
    cout << mini;
    return 0;
}
