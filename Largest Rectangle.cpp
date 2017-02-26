#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

int area=0,max1=0;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,i;
    cin>>t;
    int a[t];
    stack<int> s;
    for(i=0;i<t;i++)
        {
        cin>>a[i];
}      i=0;
    while(i<t)
        {
        if(s.empty() || a[s.top()]<=a[i])
            {
            s.push(i);
            i++;
        }
        else{
            int to=s.top();
            s.pop();
            if(s.empty())
                {
                area=a[to]*i;
            }
            else{
                area=a[to]*(i-s.top()-1);
            }
        }
        max1=max(area,max1);
    }
    while(!s.empty())
        {
         //to=s[t--];
         int to=s.top();
            s.pop();
            if(s.empty())
                {
                area=a[to]*i;
            }
            else{
                area=a[to]*(i-s.top()-1);
            }
                max1=max(area,max1);
    }
    cout<<max1<<endl;
    return 0;
}
