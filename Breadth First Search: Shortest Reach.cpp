#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int a[1000][1000],visited[1000],dist[1000],n,m;

void bfs(int s)
    {
    int z,pr=0;
    queue<int> q;
    q.push(s);
    visited[s]=1;
    while(!q.empty())
        {
        z=q.front();
        //dist[z]=pr;
        visited[z]=1;
        q.pop();
        for(int i=1;i<=n;i++)
            {
            if(a[z][i]!=0 && visited[i]!=1)
                {
                visited[i]=1;
                if(dist[i]==0)
                 dist[i]=dist[z]+6;
                 pr=dist[i];
                 q.push(i);
            }
        }
        
    }
}
int main()
    {
    int t;
    cin>>t;
    while(t--)
        {
        int v,x,y,j;
        cin>>n>>m;
        for(int p=1;p<=n;p++)
           {
                for(int d=1;d<=n;d++)
                    {
                    a[p][d]=0;
                }
           }
        for(int j1=1;j1<=m;j1++)
            {
            cin>>x>>y;
            a[x][y]=1;
            a[y][x]=1;
        }
        cin>>v;
                for(j=1;j<=1000;j++)
                    {
                    visited[j]=0;
                    dist[j]=0;
                }

        
      bfs(v);
            for(int dd=1;dd<=n;dd++)
                    {
                 if(v==dd)
                 {
                        continue;
                    }
                    if(dist[dd]==0)
                    {
                    cout<<"-1"<<" ";
                    }
                 else{
                        cout<<dist[dd]<<" ";
                    }
    }
cout<<endl;
    }
    return 0;
}
