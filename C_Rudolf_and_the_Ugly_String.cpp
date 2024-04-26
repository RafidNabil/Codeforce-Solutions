#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    tt = 1;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> vt;

        int cnt = 0;

        if (n < 3)
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p' && s[i + 3] == 'i' && s[i + 4] == 'e')
            {
                s[i + 2] = 'X';
                cnt++;
            }

            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
            {
                s[i + 1] = 'X';
                cnt++;
            }

            if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
            {
                s[i + 1] = 'X';
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}