#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    for(i = 1; i <= n; i++)
        cout << i << " ";
    cout << '\n';
    for(i = n; i >= 1; i--)
        cout << i << " ";
    return 0;
}
