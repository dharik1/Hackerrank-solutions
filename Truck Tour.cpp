#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
using namespace std;

struct truck
    {
    long g,d;
};
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n;
    cin>>n;
    queue<struct truck> qnode;
    for(long i=0;i<n;i++)
        {
        struct truck node;
        cin>>node.g>>node.d;
        qnode.push(node);
    }
    long st=0,ed=0,g=0;
    while(ed<n)
        {
        struct truck node=qnode.front();
        g+=node.g;
        qnode.pop();
        if(g>=node.d)
            {
            ed++;
            g-=node.d;
        }
        else{
            st+=ed+1;
            ed=g=0;
        }
        qnode.push(node);
    }cout<<st<<endl;
    return 0;
}
