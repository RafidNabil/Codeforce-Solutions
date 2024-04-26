#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool ss(vector<int> a, int s, int t, int i, int n)
{
    if (s == t)
        return true;

    if (i == n)
        return false;

    ss(a, s + a[i], t, i + 1, n);
    ss(a, s, t, i + 1, n);
}

int main()
{
    vector<int> a;

    for (int i = 0; i < 10; i++)
        a.push_back(rand() % 30);

    for (int i : a)
        cout << i << " ";

    if (ss(a, 0, 3, 0, a.size() - 1))
        cout << "\nYES";
    else
        cout << "\nNO";

    return 0;
}
