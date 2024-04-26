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

        if (n % 2 == 0)
            cout << n / 2 << endl;
        else
            cout << (n / 2) + 1 << endl;

            ll a= 1, b = n*3;
            for(ll i=0; i<n/2; i++)
            {
                cout<<a<<" "<<b<<endl;

                a+=3;
                b-=3;
            }

            if(n%2 != 0)
            cout<<a<<" "<<a+2<<endl;
    }

    return 0;
}