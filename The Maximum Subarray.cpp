#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int a,int b)
    {
    return (a>b)?a:b;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
        {
        int n,i,j;
        cin>>n;
        vector<int> c(n);
        int nc=0;
        for(i=0;i<n;i++)
            {
            cin>>c[i];
        }
        for(j=0;j<n;j++)
            {
            if(c[j]>0)
                {
                nc+=c[j];
            }
        }int mxs=c[0];
        int mxe=c[0];
        for(i=1;i<n;i++)
            {
            mxe=max(c[i],mxe+c[i]);
            mxs=max(mxe,mxs);
        }
        if(nc==0)
            {
            nc=mxs;
        }
        cout<<mxs<<" "<<nc<<endl;
    }
    return 0;
}
