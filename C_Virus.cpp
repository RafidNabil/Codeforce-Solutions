#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

typedef struct node
{
    ll value;
    bool mark;
} node;

bool cmp(node x, node y)
{
    return x.value > y.value;
}

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, m;

        cin >> n >> m;

        ll a[m];

        for (ll i = 0; i < m; i++)
            cin >> a[i];

        sort(a, a + m);

        node diff[m - 1];

        ll sum = 0;
        if (a[0] == 1 && a[m - 1] == n)
        {
            for (ll i = 0; i < m - 1; i++)
            {
                diff[i].value = a[i + 1] - a[i] - 1;
                diff[i].mark = (diff[i].value == 0 ? true : false);
            }

            sort(diff, diff + (m - 1), cmp);

            for (int i = 0; i < m - 1; i++)
            {
                if (!(diff[i].mark))
                {
                    ll v = diff[i].value - i * 4;
                    sum += (v == 1 ? 1 : (v > 1 ? v - 1 : 0));
                }
            }

            cout << a[m - 1] - a[0] + 1 - sum << endl;
        }
        else if ((a[0] == 2 || a[0] == 3) && a[m - 1] == n)
        {
            for (ll i = 0; i < m - 1; i++)
            {
                diff[i].value = (a[i + 1] - a[i] - 3 >= 0 ? a[i + 1] - a[i] - 3 : 0);
                diff[i].mark = (diff[i].value == 0 ? true : false);
            }

            sort(diff, diff + (m - 1), cmp);

            for (int i = 0; i < m - 1; i++)
            {
                if (!(diff[i].mark))
                {
                    ll v = diff[i].value - i * 4;
                    sum += (v == 1 ? 1 : (v > 1 ? v - 1 : 0));
                }
            }

            if (a[0] == 2)
                cout << a[m - 1] - a[0] + 1 - sum << endl;
            else if (a[0] == 3)
                cout << a[m - 1] - a[0] + 1 + 1 - sum << endl;
        }
        else
        {
            for (ll i = 0; i < m - 1; i++)
            {
                diff[i].value = (a[i + 1] - a[i] - 5 >= 0 ? a[i + 1] - a[i] - 5 : 0);
                diff[i].mark = (diff[i].value == 0 ? true : false);
            }

            sort(diff, diff + (m - 1), cmp);

            for (int i = 0; i < m - 1; i++)
            {
                if (!(diff[i].mark))
                {
                    ll v = diff[i].value - i * 4;
                    sum += (v == 1 ? 1 : (v > 1 ? v - 1 : 0));
                }
            }

            cout << a[m - 1] - a[0] + 1 + 1 - sum << endl;
        }
    }

    return 0;
}