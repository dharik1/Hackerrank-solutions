#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
        {
        int n,m,i,j;
        cin>>n>>m;
        vector<int> v(n);
        vector<bool> dp(m+1);
        for(i=0;i<n;i++)
            {
            cin>>v[i];
        }
        
        dp[0]=true;
        for(i=0;i<n;i++)
            {
            for(j=0;j+v[i]<=m;j++)
                {
                if(dp[j])
                    {
                    dp[j+v[i]]=true;
                }
            }
        }int s=0;
        for(i=m;i>=0;i--)
            {
            if(dp[i])
                {
                s=i;
                break;
            }
        }cout<<s<<endl;
    }
    return 0;
}
