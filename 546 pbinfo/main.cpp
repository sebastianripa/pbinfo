#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int v[n];
    for(i = 0; i < n; i++)
        cin >> v[i];
    for(i = 0; i < n; i++)
    {
        if(v[i]%v[n-1] == 0)
            cout << v[i] << " ";
    }
    return 0;
}
