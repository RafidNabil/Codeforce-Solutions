#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const int M = 1e9 + 7;
// const ll M = 1e18+7;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    tt = 1;
    // cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;

        int n;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a')
            {
                n = i;
                break;
            }
        }

        for (int i = n; i < s.length(); i++)
            cout << s[i];

        cout << endl;
    }

    return 0;
}