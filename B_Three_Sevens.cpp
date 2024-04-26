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

        vector<int> a[n];

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;

            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                a[i].pb(x);
            }
        }

        if (n == 1)
        {
            cout << *a[0].begin() << endl;
            continue;
        }

        set<int> st(a[n - 1].begin(), a[n - 1].end());
        vector<int> ans;

        for (int i = n - 2; i >= 0; i--)
        {
            bool done = false;
            for (auto j = a[i].begin(); j != a[i].end(); j++)
            {
                if (!st.count(*j) && done == false)
                {
                    ans.pb(*j);
                    st.insert(*j);
                    done = true;
                }
                else if (!st.count(*j) && done != false)
                {
                    st.insert(*j);
                }
            }
        }
        if (ans.size() == 0)
        {
            cout << -1 << endl;
            continue;
        }

        reverse(ans.begin(), ans.end());
        set<int> ansst(ans.begin(), ans.end());

        for (auto j = a[n - 1].begin(); j != a[n - 1].end(); j++)
        {
            if (!ansst.count(*j))
            {
                ans.pb(*j);
                break;
            }
        }

        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}