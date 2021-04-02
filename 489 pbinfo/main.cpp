#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> v[i];
    for(i = 1, j = n; i <= j; i++, j--)
    {
        cout << v[i] << '\n'    `;
        if(i < j)
            cout << v[j] << " ";
    }
    return 0;
}
