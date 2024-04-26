#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        string str;

        cin >> n >> str;

        ll k=1, sum=0;
        for(ll i=0; i<n-1; i++)
        {
            if(str[i] != str[i+1])
            sum += k;

            k++;
        }

        cout<<str.size()+sum<<endl;
    }

    return 0;
}