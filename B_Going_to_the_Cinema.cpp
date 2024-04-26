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
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        vector<vector<int>> v(n);

        for (int i = 0, j = 0; i < n; i++)
        {
            if (i != 0)
            {
                v[i].assign(v[i - 1].begin(), v[i - 1].end());
            }
            while (j < n)
            {
                if (a[j] <= i)
                {
                    v[i].pb(a[j]);
                    j++;
                }
                else
                    break;
            }
        }

        set<vector<int>> st(v.begin(), v.end());

        for (auto i = st.begin(); i != st.end(); i++)
        {
            int sz = (*i).size();

            if (sz - 1 < *((*i).end() - 1))
                st.erase(i);
        }

        cout << st.size() << endl;
    }

    return 0;
}

6 0 3 3 6 7 2 7
0 2 3 3 6 6 7 7
7 7 6 6 3 3 2 0