#include <bits/stdc++.h>
using namespace std;
static int m[10001][10001];
static int d[10001];
bool v[4001];
int n;
int min()
    {
    int min=INT_MAX;
    int in;
    for(int i=1;i<=n;i++)
        {
        if(!v[i] && d[i]<=min)
            {
            min=d[i];
            in=i;
        }
    }
    return in;
}
void djk(int s)
    {
    for(int i=1;i<=n;i++)
        {
        int u=min();
        v[u]=true;
        for(int j=1;j<=n;j++)
            {
            if(!v[j] && m[u][j] && d[u]!=INT_MAX && d[j]>d[u]+m[u][j])
                {
                d[j]=d[u]+m[u][j];
            }
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
        {
        int k;
        cin>>n>>k;
        int a,b,l,i,j;
        for(i=1;i<=n;i++)
            {
            for(j=1;j<=n;j++)
                {
                m[i][j]=0;
                m[j][i]=0;
            }
        }
        for(i=1;i<=k;i++)
            {
            cin>>a>>b>>l;
            if(!m[a][b] || m[a][b]>l)
                {
            m[a][b]=l;
            m[b][a]=l;
        }
        }
        int s;
        cin>>s;
        for(i=1;i<=n;i++)
            {
            d[i]=INT_MAX;
        }
        d[s]=0;
        memset(v,false,sizeof(v));
        djk(s);
        for(i=1;i<=n;i++)
            {
            if(d[i]==INT_MAX)
                {
                cout<<"-1"<<" ";
            }
            else if(d[i]==0)
                {}
            else{
                cout<<d[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
