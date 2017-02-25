#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,dp[42];
    cin>>n;
    dp[0]=dp[1]=dp[2]=dp[3]=1;
    for(int i=4;i<=42;i++)
        {
        dp[i]=dp[i-1]+dp[i-4];
    }
    while(n--)
        {
        int a,m;
        cin>>a;
        m=dp[a];
        if(m<2)
            {
            cout<<"0"<<endl;
            continue;
        }
         else
            {
             bool b[m+1];
             int s=0;
        memset(b,true,sizeof(b));
        for(int i=2;i*i<=m;i++)
            {
            if(b[i]==true)
                {
            for(int j=i*i;j<=m;j=j+i)
                {
                b[j]=false;
            }
            }
        }
        for(int i=2;i<=m;i++)
            {
            if(b[i]==true)
                {
                s++;
                //cout<<i;
            }
        }cout<<s<<endl;
        }
    }
    return 0;
}
