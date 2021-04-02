#include <iostream>

using namespace std;

int main()
{
    int n, cn, c, nrc = 0, s = 0;
    cin >> n;
    do
    {
        if(n > 9)
        {
            while(n > 99)
            {
                n /= 10;
            }
            s += n;
        }
        cin >> n;
    }
    while(n != 0);
    cout << s;
    return 0;
}
