#include <iostream>

using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    if(n%5 > 0)
    {
        cout << n/5 + 1 << '\n';
        cout << "NU" << '\n';
        n = n/5+1;
    }
    else
    {
        cout << n/5 << '\n';
        cout << "DA" << '\n';
        n = n/5;
    }
    while(n > i)
    {
        n -= i;
        i++;
    }
    if(i%2 == 0)
        cout << "panselute";
    else
        cout << "micsunele";
    return 0;
}
