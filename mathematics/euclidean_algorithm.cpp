#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (x < y)
    {
        swap(x, y);
    }

    int r;
    while ((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return y;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}
