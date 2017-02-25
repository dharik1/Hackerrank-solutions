#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    cin>>s;
    long long ans=0;
    long long factor=1;
    for(long long i=s.length()-1;i>=0;i--)
        {
        ans=(ans+(s[i]-'0')*factor*(i+1))%1000000007;
        factor=(factor*10+1)%1000000007;
    }
    cout<<ans;
    return 0;
}
