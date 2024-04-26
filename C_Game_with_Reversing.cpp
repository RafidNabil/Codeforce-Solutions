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
        string a;
        cin >> a;

        string b;
        cin >> b;

        string rb = b;
        reverse(rb.begin(), rb.end());

        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }

        if (a == rb)
        {
            cout << 2 << endl;
            continue;
        }

        int i = 0, j = n - 1;

        bool f1 = true, f2 = true;

        while (i <= j)
        {
            if (a[i] != a[j])
            {
                f1 = false;
                break;
            }
            i++;
            j--;
        }

        i = 0, j = n - 1;
        while (i <= j)
        {
            if (b[i] != b[j])
            {
                f2 = false;
                break;
            }
            i++;
            j--;
        }

        if (f1 && f2)
        {
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b[i])
                    cnt++;
            }

            cout << (cnt * 2) - 1 << endl;
            continue;
        }

        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                cnt1++;

            if (a[i] != rb[i])
                cnt2++;
        }

        int ans = 0;

        if (cnt1 < cnt2)
        {
            int alice = cnt1;
            int bob = (alice == 0 ? 0 : alice - 1);

            if (bob % 2 != 0)
                ans = alice * 2;
            else
                ans = (alice * 2) - 1;
        }
        else if (cnt1 > cnt2)
        {
            int alice = cnt2;
            int bob = (alice == 0 ? 0 : alice - 1);

            if (bob % 2 == 0)
                ans = alice * 2;
            else
                ans = (alice * 2) - 1;
        }
        else if (cnt1 == cnt2)
        {
            ans = cnt1 * 2 - 1;
        }

        cout << ans << endl;
    }

    return 0;
}