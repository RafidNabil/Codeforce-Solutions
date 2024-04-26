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
    ll t;
    t = 1;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        ll sz = s.length();

        if (sz == 1)
        {
            if (s == "0")
                cout << 0 << endl;
            else
                cout << 1 << endl;
            continue;
        }

        set<char> st;

        for (ll i = 0; i < sz; i++)
        {
            st.insert(s[i]);
        }

        if (st.size() == 1 && *st.begin() == '1')
        {
            cout << sz * sz << endl;
            continue;
        }

        s += s;

        ll cnt = 0;
        ll mx = -1;

        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                cnt++;
            else
            {
                mx = max(mx, cnt);
                cnt = 0;
            }
        }

        mx = max(mx, cnt);
        mx++;

        if (mx % 2 == 0)
        {
            cout << (mx / 2) * (mx / 2) << endl;
        }
        else
            cout << (mx / 2) * (1 + mx / 2) << endl;
    }

    return 0;
}