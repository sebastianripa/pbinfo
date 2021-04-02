#include <iostream>

using namespace std;

int main()
{
    int x, mini = 1000000;
    cin >> x;
    if(x == 0)
        cout << "NU EXISTA";
    else
    {
        do
        {
            cin >> x;
            if(mini < x && x > 0)
            {
                mini = x;
            }
        }
        while(x != 0);
        cout << mini;
    }
    return 0;
}
