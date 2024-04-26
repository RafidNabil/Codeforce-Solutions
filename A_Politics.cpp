#include <iostream>
#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

void solve()
{
    vector<string> vt;

    int n, k, l;
    cin >> n >> k;
    l = n;

        for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vt.pb(s);
    }

    for (int i = 1; i < n; i++)
    {
        if (vt[i] != vt[0])
            l--;
    }

    cout << l << endl;
}

int main()
{
    FAST int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}