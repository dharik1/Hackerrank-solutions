#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int ll;
int main() { 
//kaprekar number example (num)^2=num2,
//if num2 is possible to split up and the sum made to same number (num),then it is kaprekar number... 
//for more explantion see below comments
    ll a,b,square,temp,count=0,tens=1,numcount=0;
    cin>>a>>b;
    for(ll i=a;i<=b;i++)//i=45
        {
        temp=i;
        tens=1;
        count=0;
        square=i*i;//2025
        while(temp>0)
            {
            temp/=10;
            count++;
        }
        temp=square;
        while(count--)
            {
            temp/=10;//20
            tens*=10;
        }
        square%=tens;//25
        if(square+temp==i)//here 20+25=45
            {
            cout<<i<<" ";
            numcount++;
        }
    }
    if(!numcount)
    {
        cout<<"INVALID RANGE";
    }
    return 0;
}
