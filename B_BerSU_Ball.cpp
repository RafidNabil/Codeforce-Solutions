#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{

    int a, b;

    cin >> a;
    vector<int> m;

    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        m.push_back(x);
    }

    cin >> b;
    vector<int> f;

    vector<int>::iterator it;

    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        f.push_back(x);
    }
    sort(m.begin(), m.end());
    sort(f.begin(), f.end());

    int count = 0;
    for (int i = 0; i < m.size(); i++)
    {

        if ((it = find(f.begin(), f.end(), m[i] - 1)) != f.end())
        {
            count++;
            f.erase(f.begin() + (it - f.begin()));
        }
        else if ((it = find(f.begin(), f.end(), m[i])) != f.end())
        {
            count++;
            f.erase(f.begin() + (it - f.begin()));
        }
        else if ((it = find(f.begin(), f.end(), m[i] + 1)) != f.end())
        {
            count++;
            f.erase(f.begin() + (it - f.begin()));
        }
    }

    cout << count;

    return 0;
}