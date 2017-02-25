#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define l 12345678
using namespace std;
int min(int g,int h)
    {
    return (g>h)?h:g;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long d[1000][1000],i,j,k1,x,y,r,q,a,b,n,m;
    cin>>n>>m;
    for(i=1;i<=n;i++)
     {
        for(j=1;j<=n;j++)
    {     if(i==j)
        {
        d[i][j]=0;
    }    else{
          d[i][j]=l;
        }
    }
    }
    for(k1=1;k1<=m;k1++)
        {
        cin>>x>>y>>r;
     if(x!=y){
        d[x][y]=r;
    }
    } 
    for(int v=1;v<=n;v++)
    {
          for(int o=1;o<=n;o++)
                {
                for(int k=1;k<=n;k++)
                    {
                  if(d[o][v]!=l && d[v][k]!=l)
                {
                   d[o][k]=min(d[o][k],d[o][v]+d[v][k]);
                }
                }
          }
    }
    cin>>q;
    while(q--)
        {
        cin>>a>>b;
        if(d[a][b]==l)
            {
            cout<<"-1"<<endl;
        }
        else{
            cout<<d[a][b]<<endl;
        }
    }
    return 0;
}
