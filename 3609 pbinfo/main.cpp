#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a%10 != 0 && b%10 != 0)
        cout << (b-a)/10;
    else
        cout << (b-a)/10+1;
    return 0;
}
