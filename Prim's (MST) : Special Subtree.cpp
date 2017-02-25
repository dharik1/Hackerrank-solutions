#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define LL 1000001
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int m,i,j,k=0,a,b,r,n,s,x,y,min;
    unsigned long sm=0;
    cin>>n;
    cin>>m;
    int d[n][n];
    bool vst[n];
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(i==j)
                {
                d[i][j]=0;
              }
            else
            {
            d[i][j]=LL;
             }
           }
        }
    for(i=0;i<n;i++)
        {
        vst[i]=false;
    }
    for(j=0;j<m;j++)
        {
        cin>>a;
        cin>>b;
        cin>>r;
        if(d[a-1][b-1]>r)
            {
        d[a-1][b-1]=r;
        d[b-1][a-1]=r;
         }
    }
    cin>>s;
    vst[s-1]=true;
    while(k<n-1)
        {
        min=LL;
        for(i=0;i<n;i++)
            {
            if(vst[i]==true)
                {
                for(j=0;j<n;j++)
                    {
                    if(vst[j]==false)
                        {
                       if(d[i][j]<min)
                          {
                             min=d[i][j];
                             x=i;
                             y=j;
                          }
                       }
                    }
                }
            }  
        vst[y]=true;
        sm=sm+d[x][y];
        k++;
    }
 cout<<sm<<endl;
    return 0;
}
