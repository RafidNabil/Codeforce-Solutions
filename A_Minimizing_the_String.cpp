#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int same = 1;

    if (n == 1)
    {
        cout << s << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] > s[i + 1])
        {
            s.erase(i, 1);
            cout << s << endl;
            return 0;
        }

        if (s[i] != s[i + 1])
            same = 0;
    }

    s.erase(n - 1, 1);
    cout << s << endl;

    return 0;
}