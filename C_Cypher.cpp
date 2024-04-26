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
        int n;

        cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
        cin>>a[i];

        for(int i=0; i<n; i++)
        {
            int x, sum = 0;
            char c;

            cin>>x;

            for(int j=0; j<x; j++)
            {
                cin>>c;
                if(c == 'U')
                sum--;
                else
                sum++;
            }

            sum = (sum<0 ? 10+(sum%10) : sum);

            cout<<(a[i]+sum)%10<<" ";

        }
        
        cout<<endl;

    }
 
    return 0;
}