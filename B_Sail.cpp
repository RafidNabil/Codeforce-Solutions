#include <iostream>
#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    FAST
    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        ll t, sx, sy, ex, ey;
        cin >> t >> sx >> sy >> ex >> ey;
        string s;
        cin >> s;

        bool reached = false;

        int i;
        for (i = 0; i < s.length(); i++)
        {
            if (ex == sx && ey == sy)
            {
                reached = true;
                break;
            }
            else if (ex > sx && s[i] == 'E')
                sx++;
            else if (ex < sx && s[i] == 'W')
                sx--;
            else if (ey > sy && s[i] == 'N')
                sy++;
            else if (ey < sy && s[i] == 'S')
                sy--;
        }

        if (reached)
            cout << i << endl;
        else
            cout << -1;
    }

    return 0;
}