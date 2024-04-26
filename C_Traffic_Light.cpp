#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        char c;
        cin >> c;

        string s;
        cin >> s;
        
        s += s;

        vector<int> g, ch;

        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i] == 'g')
                g.pb(i);
            else if (i < n && (s[i] == c))
                ch.pb(i);
        }

        int ans = 0;
        for (int i = 0; i < ch.size(); i++)
        {
            int x = *(upper_bound(g.begin(), g.end(), ch[i]));
            ans = max(ans, x - ch[i]);
        }

        cout<<ans<<endl;
    }

    return 0;
}