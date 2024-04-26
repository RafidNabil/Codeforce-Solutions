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
        int m, k, a, b;
        cin >> m >> k >> a >> b;

        int kt = m / k;
        int ot = m % k;
        int fo = max(0, ot - a);
        int ro = max(a - ot, 0);
        int fk = max(kt - b, 0);
        int replace = min(ro / k, fk);
        int ans = fo + fk - replace;
        cout << ans << endl;

    return 0;
}

