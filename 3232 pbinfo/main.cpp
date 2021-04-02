    #include <iostream>

    using namespace std;

    int main()
    {
        int n, i;
        cin >> n;
        if(n%2 == 0)
        {
            for(i = 2; i <= n; i += 2)
                cout << i << " ";
        }
        else
        {
            for(i = 2; i < n; i++)
                cout << i << " ";
        }
        return 0;
    }
