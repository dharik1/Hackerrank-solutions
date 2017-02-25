#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int64_t cn(int64_t c[],int64_t m,int64_t n)
    {
    int64_t tab[n+1][m],x,y;
    for(int64_t k=0;k<m;k++)
        {
        tab[0][k]=1;
    }
    for(int64_t i=1;i<n+1;i++)
        {
        for(int64_t j=0;j<m;j++)
            {
            x=(i-c[j] >= 0)?tab[i-c[j]][j]:0;
            y=(j >= 1)?tab[i][j-1]:0;
                tab[i][j]=x+y;
        }
    }
    return tab[n][m-1];
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int64_t n,m,i,j;
    cin>>n>>m;
    int64_t c[m];
    for(i=0;i<m;i++)
        {
        cin>>c[i];
    }
    cout<<cn(c,m,n);
    return 0;
}
