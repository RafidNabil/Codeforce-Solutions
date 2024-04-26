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

        string s, f;
        cin >> s >> f;

        int zm = 0, om = 0, total = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && f[i] == '1')
            {
                zm++;
                total++;
            }
            else if (s[i] == '1' && f[i] == '0')
            {
                om++;
                total++;
            }
        }

        cout << (total - (min(om, zm) * 2)) + min(om, zm) << endl;
    }

    return 0;
}