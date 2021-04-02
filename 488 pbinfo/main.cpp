#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n, i, j;
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> v[i];
    for(i = 2; i <= n; i += 2)
        cout << v[i] << " ";
    cout << '\n';
    if(n%2 == 0)
        n--;
    for(i = n; i > 0; i -= 2)
        cout << v[i] << " ";
    return 0;
}
