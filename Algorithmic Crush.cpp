#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int l;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    l n,m,x=0,max=0,a,b,value;
    cin>>n>>m;
   l *arr=new l[n+1]();
    //long a,b,value;
    for(l i=0;i<m;i++)
        {
        cin>>a>>b>>value;
        arr[a]+=value;
        if(b+1 <= n)
            {
            arr[b+1]-=value;
        }
    }//long x=0;
    //long max=0;
    for(l i=1;i<=n;i++)
        {
        x+=arr[i];
        if(x>max)
            {
            max=x;
        }
    }cout<<max;
    return 0;
}
