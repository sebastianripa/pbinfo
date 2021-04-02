#include <iostream>

using namespace std;

int main()
{
    long long n, nrd = 0, i;
    cin >> n;
    for(i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            if(i != n/i)
                nrd += 2;
            else
                nrd++;
        }
    }
    if(nrd%2 == 1)
        cout << "da";
    else
        cout << "nu";
    return 0;
}
