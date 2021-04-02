#include <iostream>

using namespace std;

int main()
{
    int s, n, x, i, mini = 10001, nrm;
    cin >> s >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        if(x < mini)
        {
            mini = x;
            nrm = i;
        }
    }
    cout << s/mini << " " << nrm;
    return 0;
}
