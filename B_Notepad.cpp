#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    // t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        string s, temp;
        cin >> n >> s;
        map<string, int> m;

        bool found = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (i != 0 && s.substr(i, 2) == s.substr(i - 1, 2) && s.substr(i, 2) == s.substr(i + 1, 2))
            {
                found = 1;
                break;
            }
            else if (i != 0 && s.substr(i, 2) == s.substr(i - 1, 2) && s.substr(i, 2) != s.substr(i + 1, 2))
            {
                continue;
            }
            else
            {
                m[s.substr(i, 2)]++;
                if (m[s.substr(i, 2)] > 1)
                {
                    found = 1;
                    break;
                }
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}