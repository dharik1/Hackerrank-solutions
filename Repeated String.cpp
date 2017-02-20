#include <iostream>

using namespace std;
//given string aba
//count number of 'a' in string 
// given k
//if length of string increases with repeated character find the occurnce of 'a'
//string "aba",k=0
//abaabaabaa
//answer=10
int main(){
    string s;
    cin >> s;
    long n;
    cin >> n;
    long cnt=0;
    long len=s.length();
    long a[len]={0};
    for(long i=0;i<s.length();i++)
        {
        if(s[i]=='a')
            {
            cnt++;
        }
        a[i]=cnt;
    }
    long ans;
    ans=n/len*cnt;
    if(n%len!=0)
        {
    ans+=a[n%len-1];
    }
        cout<<ans;
    return 0;
}
