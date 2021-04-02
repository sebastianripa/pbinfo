#include <iostream>

using namespace std;

int main()
{
    long long n;
    int cmi = -1;
    bool haha = false;
    cin >> n;
    if(n == 0)
        cout << 0;
    else
    {
        while(n)
        {
            if(cmi < n%10 && (n%10)%2 == 1)
                cmi = n%10;
        }
        if(cmi == -1)
            cout << "nu exista";
        else
            cout << cmi;
    }
    return 0;
}
