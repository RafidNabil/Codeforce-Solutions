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

        cin>>n;

        ll tm [n], spell[n];

        ll ttm = 0;

        for(ll i=0; i<n; i++)
        {
            cin>>tm[i];
            ttm+=tm[i];
        }

        for(ll i=0; i<n; i++)
        {
            cin>>spell[i];
            ttm+=spell[i];
        }

        sort(spell, spell+n);
        ttm-=spell[n-1];

        cout<<ttm<<endl;

    }
 
    return 0;
}