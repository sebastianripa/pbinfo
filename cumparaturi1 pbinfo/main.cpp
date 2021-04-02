#include <iostream>

using namespace std;

int main()
{
    int n, s, c;
    cin >> s >> c >> n;
    if(s%n == 0 && s%c == 0)
        cout << "CN";
    else if(s%n == 0)
        cout << "N";
    else if(s%c == 0)
        cout << "C";
    else
        cout << "nimic";
    return 0;
}
