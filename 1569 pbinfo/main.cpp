#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(j != 1)
                cout << '\n';
            for(k = 1; k <= i; k++)
                cout << i;
        }
        cout << '\n';
    }
    return 0;
}
