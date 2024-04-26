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
        string s;
        cin >> s;

        ll a = 0, b = 0;

        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                a++;
            else
                b++;
        }

        if (a >= b)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}