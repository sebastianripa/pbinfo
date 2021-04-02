#include <iostream>

using namespace std;

int main()
{
    long long n;
    int maxi = -1;
    cin >> n;
    if(n == 0)
        maxi = 0;
    else
    {
        while(n)
        {
            if(maxi < n%10)
                maxi = n%10;
            n /= 10;
        }
        cout << maxi;
    }
    return 0;
}
