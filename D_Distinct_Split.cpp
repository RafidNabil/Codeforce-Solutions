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

        int a[n] = {0};
        int b[n] = {0};

        set<int> st;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (!st.count(s[i]))
            {
                cnt++;
                a[i] = cnt;
                st.insert(s[i]);
            }
            else
                a[i] = cnt;
        }

        cnt = 0;
        st.clear();

        for (int i = n - 1; i >= 0; i--)
        {
            if (!st.count(s[i]))
            {
                cnt++;
                b[i] = cnt;
                st.insert(s[i]);
            }
            else
                b[i] = cnt;
        }

        int ans = -1;

        for (int i = 0; i < n - 1; i++)
        {
            ans = max(a[i] + b[i + 1], ans);
        }

        cout << ans << endl;
    }

    return 0;
}