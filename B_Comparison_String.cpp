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
    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        char pv = 'a';
        int cnt = 1, mx = -1;
        for (int i = 0; i < n; i++)
        {
            if (pv == s[i])
                cnt++;
            else
            {
                mx = max(mx, cnt);
                cnt = 1;
            }
            pv = s[i];
        }

        mx = max(mx, cnt);

        cout << mx+1 << endl;
    }

    return 0;
}