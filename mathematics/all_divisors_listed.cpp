#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    cin >> x;

    vector<int> v;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            v.push_back(i);
            if (i * i != x)
            {
                v.push_back(x / i);
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}