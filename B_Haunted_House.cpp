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
    ll tt;
    tt = 1;
    cin >> tt;

    while (tt--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll z = 0, o = 0;
        stack<ll> st;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                z++;
                
            }
            else
                o++;
        }

        ll pvans = 0, lz = 0;
        string ss = s;
        reverse(ss.begin(), ss.end());

        for (ll i = n - 1; i >= 1; i--)
        {
            if (ss[i] == '0')
                st.push(i);
        }

        for (ll i = 1; i <= n; i++)
        {
            if (z < i)
            {
                cout << -1 << " ";
                continue;
            }
            else
            {

                if (ss[i - 1] == '1')
                {
                    ll j = 0;
                    while(j<i)
                    {
                        j = st.top();
                        st.pop();
                    }

                    cout << pvans + (j - (i - 1)) << " ";
                    ss[j] = '1';

                    pvans = pvans + (j - (i - 1));
                }
                else
                    cout << 0 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}