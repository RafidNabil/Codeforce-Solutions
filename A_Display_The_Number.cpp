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

        if(n%2 == 0)
        {
            for(int i=0; i<n/2; i++)
            cout<<1;

            cout<<endl;
        }
        else
        {
            cout<<7;
            for(int i=0; i<(n-3)/2; i++)
            cout<<1;

            cout<<endl;
        }
    }
 
    return 0;
}