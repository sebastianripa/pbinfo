    #include <iostream>

    using namespace std;

    int main()
    {
        long long n, s, jn;
        cin >> n;
        jn = (n-1)/2;
        s = (n*(n+1)/2) - (2*(jn*(jn+1)/2));
        cout << s;
        return 0;
    }
