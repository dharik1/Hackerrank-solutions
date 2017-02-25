#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

int gmt[102];
int vist[102];
int dist[110];
int isvld(int a)
    {
    if(a<1 || a>100 || vist[a])
        {
        return 0;
    }
    else{
        return 1;
    }
}
int snk(int i)
    {
    queue<int> q;
    q.push(i);
    
    memset(vist,0,sizeof(vist));
    vist[i]=1;
    dist[i]=0;
    while(!q.empty())
        {
        int z=q.front();
        
        q.pop();
        for(int k=1;k<=6;k++)
            {
            int a=gmt[z+k];
            if(isvld(a))
                {
                q.push(a);
                vist[a]=1;
                dist[a]=dist[z]+1;
            }
        }
    }
    if(!vist[100])
        {
        return -1;
    }
    else{
        return dist[100];
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--)
        {
        for(int i=1;i<=100;i++)
            {
            gmt[i]=i;
        }
        int l,s;
        cin>>l;
        int a,b;
        for(int i=0;i<l;i++)
            {
            cin>>a>>b;
            gmt[a]=b;
        }
        cin>>s;
        int x,y;
        for(int i=0;i<s;i++)
            {
            cin>>x>>y;
            gmt[x]=y;
        }
        cout<<snk(1)<<endl;
    }
    return 0;
}
