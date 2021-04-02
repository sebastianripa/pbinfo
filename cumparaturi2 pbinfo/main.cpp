#include <iostream>

using namespace std;

int main()
{
    int s, d, r, m;
    cin >> s >> d >> r >> m;
    if(s - d >= 0)
        cout << "drona";
    else if(s - r >= 0)
        cout << "robot";
    else if(s - m >= 0)
        cout << "masina";
    else
        cout << "nimic";
    return 0;
}
