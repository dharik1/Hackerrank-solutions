#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef int ll;
int main()
    {
    ll n,m;
    cin>>n>>m;
    ll l[n+1][m+1],a[n],b[m];
    for(ll i=0;i<n;i++)
        {
        cin>>a[i];
    }
    for(ll j=0;j<m;j++)
        {
        cin>>b[j];
    }
     for (ll i=0; i<=n; i++)
    {
     for (ll j=0; j<=m; j++)
     {
       if (i == 0 || j == 0){
         l[i][j] = 0;
       }
       else if (a[i-1] == b[j-1]){
         l[i][j] = l[i-1][j-1] + 1;
       }
       else{
         l[i][j] = max(l[i-1][j], l[i][j-1]);
       }
     }
   }
    ll index = l[n][m];
    ll lcs[index+1];
    ll in=index;
    ll i = n, j = m;
   while (i > 0 && j > 0)
   {
      if (a[i-1] == b[j-1])
      {
          lcs[index-1] = a[i-1]; 
          i--; j--; index--;     
      }
      else if (l[i-1][j] > l[i][j-1])
         i--;
      else
         j--;
   }
    for(i=0;i<in;i++)
        {
        cout<<lcs[i]<<" ";
    }
    return 0;
}

