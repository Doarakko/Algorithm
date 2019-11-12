#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<bool> sieveOfEratosthenes(int n)
{
    vector<bool> v(n + 1);
    v[0] = false;
    v[1] = false;
    for (int i = 1; i <= n; i++)
    {
        v[i] = true;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        for (int j = i * 2; j <= n; j += i)
        {
            v[j] = false;
        }
    }

    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<bool> v = sieveOfEratosthenes(n);

    for (int i = 0; i <= n; i++)
    {
        cout << i << ":" << v[i] << endl;
    }

    return 0;
}
