#include <iostream>

using namespace std;

int main()
{
    int n, c = 0, suma, i;
    cin >> n;
    suma = n;
    while(suma < n*n)
    {
        c++;
        if(suma < n*n)
            suma = suma+(n+c)+(n-c);
    }
    if(suma == n*n)
    {
        for(i = n-c; i <= n+c; i++)
            cout << i << " ";
    }
    else
        cout << "NU ESTE NOROCOS";
    return 0;
}
