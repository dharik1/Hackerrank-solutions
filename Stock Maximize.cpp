#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
        {
        int n,s=0;
        long p=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            {
            cin>>a[i];
        }
        for(int j=n-1;j>=0;j--)
            {
            if(s<=a[j])
                {
                s=a[j];
            }
            p+=s-a[j];
        }
        cout<<p<<endl;
    }
    return 0;
}
