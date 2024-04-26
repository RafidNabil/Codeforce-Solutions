#include <iostream>
#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    int n;

    cin>>n;

    int a[n];

    for(int i=0; i<n ; i++)
    cin>>a[i];

    int flag = 0, count = 1, ans = 0;
    for(int i=1; i<n; i++)
    {
        if(flag == 0)
        {
            if(a[i]>=a[i-1])
            count++;
            else
            {
                flag = 1;
                count++;
            }
        }
        else if(flag == 1)
        {
            if(a[i]<=a[i-1])
            count++;
            else
            {
                flag = 0;
                ans = max(ans, count);
                count = 1;
                count++;
            }
        }
    }

    ans = max(ans, count);

    flag = 0, count = 1;
    for(int i=n-1; i>=1; i--)
    {
        if(flag == 0)
        {
            if(a[i]<=a[i-1])
            count++;
            else
            {
                flag = 1;
                count++;
            }
        }
        else if(flag == 1)
        {
            if(a[i]>=a[i-1])
            count++;
            else
            {
                flag = 0;
                ans = max(ans, count);
                count = 1;
                count++;
            }
        }
    }

    ans = max(ans, count);
    cout<<ans;
 
    return 0;
}