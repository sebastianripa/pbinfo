#include <iostream>

using namespace std;

int main()
{
    long long n, maxi = -1, i, x;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        if(maxi < x)
        {
            maxi = x;
        }
    }
    cout << maxi;
    return 0;
}
