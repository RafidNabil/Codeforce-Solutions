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
        ll n, k, b, s;

        cin>>n>>k>>b>>s;

        ll firsthi = (n-1)*(k-1), lastlow = b*k;
        ll lasthi = lastlow+k-1;

        if(s>=lastlow && s<=firsthi+lasthi)
        {
            cout<<lastlow<<" ";

            ll sum = lastlow;

            n--;
            while(n--)
            {
                if((s-sum)>(k-1))
                {
                    cout<<k-1<<" ";
                    sum+=k-1;
                }
                else
                {
                    cout<<s-sum<<" ";

                    sum += s-sum;
                }
            }

            cout<<endl;
        }
        else
        cout<<"-1"<<endl;
    }
 
    return 0;
}