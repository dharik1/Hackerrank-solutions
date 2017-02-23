#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    int n=s.size();
    int r,c;
    r=round(sqrt(n));
    if(r>=sqrt(n))
        {
        c=r;
    }
    else{
        c=r+1;
    }
    for(int i=0;i<c;i++)
        {
        for(int j=i;j<n;j+=c)
            {
            cout<<s[j];
        }
        cout<<" ";
    }
    return 0;
}
