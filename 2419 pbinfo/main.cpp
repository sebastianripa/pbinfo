#include <iostream>

using namespace std;

int a, b, i, mid;

int main()
{
    cin >> a >> b;
    if(a > b)
        swap(a, b);
    mid = (a+b)/2;
    cout << ((mid-a)*(mid-a+1))/2+((b - mid)*(b - mid+1)/2;
    return 0;
}
