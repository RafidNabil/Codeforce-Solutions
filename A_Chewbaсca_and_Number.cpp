#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - 48;

        if (i == 0)
        {
            if (x != 9 && x >= 5)
                cout << 9 - x;
            else
                cout << x;
        }
        else
        {
            if (x >= 5)
                cout << 9 - x;
            else
                cout << x;
        }
    }

    return 0;
}