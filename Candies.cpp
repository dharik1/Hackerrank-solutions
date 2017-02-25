#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n;
    cin>>n;
    ll a[n];
    //ll t=0;
   // while(t<n)
    for(ll i=0;i<n;i++)
        {
        cin>>a[i];
       // t++;
    }ll dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    //ll ans
    for(ll i=1;i<n;i++)
      {
        if(a[i]>a[i-1])
            {
            dp[i]=dp[i-1]+1;
        }
        else{
            dp[i]=1;
        }
    }
    for(ll j=n-2;j>=0;j--)
        {
        if(a[j]>a[j+1])
            {
        dp[j]=max(dp[j],dp[j+1]+1);
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
      {
        ans+=dp[i];
    }cout<<ans<<endl;
    return 0;
}
