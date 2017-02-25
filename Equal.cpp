#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long t;
    cin>>t;
    while(t--)
        {
        long n,mxn=0x7ffffff,diff,mn=0x7ffffff;
        cin>>n;
        long a[n];
        for(long i=0;i<n;i++)
            {
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        for(long t=-5;t<=0;t++)
            {
            long r=0;
            for(long i=0;i<n;i++)
                {
                diff=a[i]-(mn+t);
                r+=diff/5;
                diff%=5;
                r+=diff/2;
                diff%=2;
                r+=diff;
            }
            if(r<mxn) mxn=r;
        }cout<<mxn<<endl;
    }
    return 0;
}
