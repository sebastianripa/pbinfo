#include <iostream>

using namespace std;

int main()
{
    int x;
    for(x = -10; x <= 10; x++)
    {
        if(x > 6 - x*x)
        {
            if(x*x < 3 - 2*x)
                cout << "RED" << '\n';
            else
                cout << "GREEN" << '\n';
        }
        else
            cout << "BLUE" << '\n';
    }
    return 0;
}
