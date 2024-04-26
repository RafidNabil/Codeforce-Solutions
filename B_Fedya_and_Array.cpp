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
        int x, y;
        cin>>x>>y;
        vector<int> v;

        int i;
        for (i = x; i >= y; i--)
            v.pb(i);

            i+=2;

        for (i = i; i <= x - 1; i++)
            v.pb(i);


        cout << v.size() << endl;
        for (int j : v)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}