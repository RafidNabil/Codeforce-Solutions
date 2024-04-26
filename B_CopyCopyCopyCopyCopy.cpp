#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;

        cin >> n;

        set<ll> st;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        cout << st.size()<<endl;
    }

    return 0;
}