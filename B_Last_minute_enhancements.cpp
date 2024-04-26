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

        map<ll, ll> song;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if(song.count(x))
            song[x+1]++;
            else
            song[x]++;
        }

        /* for (auto i = song.begin(); i != song.end(); i++)
        {
            cout<<i->first<<" "<<i->second<<endl;
        } */

        cout<<song.size()<<endl;
    }

    return 0;
}