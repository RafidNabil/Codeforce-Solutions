#include <iostream>
#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ll n, k, add=0;

    cin>>n>>k;

    ll a[n];

    for(int i=0; i<n; i++)
    cin>>a[i];

    for(int i=1; i<n; i++)
    {
        if(a[i-1]+a[i] < k)
        {
            int ad = (k - a[i-1])-a[i];
            add+=ad;
           a[i]+=ad;
        }
        
    }

    cout<<add<<endl;
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
 
    return 0;
}