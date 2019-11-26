#include <iostream>
#include <stdio.h>
#include <vector>
#include <climits>

using namespace std;

int linearSearch(vector<int> v, int key)
{
    int i = 0;
    v[v.size() - 1] = key;

    while (v[i] != key)
    {
        i++;
    }
    if (i == v.size() - 1)
    {
        return -1;
    }

    return i;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int key;
    cin >> key;
    cout << linearSearch(v, key) << endl;
}