#include <iostream>

using namespace std;

int main()
{
    int c, p, difp, g, o;
    cin >> c >> p;
    difp = 4*c - p;
    g = difp/2;
    o = c - g;
    cout << g << " " << o;
    return 0;
}
