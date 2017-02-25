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
    ll n,x;
    cin>>n>>x;
    ll t,v[n],a[n];
    t=0;
    while(t<n)
        {
        cin>>v[t]>>a[t];
        t++;
    }
    ll dp[x+1];
     memset(dp,-10000000,sizeof(dp));
    dp[0]=0;
    /*for(ll i=1;i<=x;i++)
        {
        dp[i]=-10000000;
    }*/
    t=0;
    while(t<n)
        {
        for(ll j=x;j>=a[t];j--)
            {
            dp[j]=max(dp[j],dp[j-a[t]]+v[t]);//?dp[j]:dp[j-a[t]]+v[t];
        }
        t++;
    }
    if(dp[x]>0)
        {
    cout<<dp[x]<<endl;
    }
    else{
        cout<<"Got caught!"<<endl;
    }
    return 0;
}
