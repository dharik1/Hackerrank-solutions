#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0; P_i < r; P_i++){
           cin >> P[P_i];
        }
        int f=0,x,y;
        for(int i=0;i<R;i++)
            {
            for(int j=0;j<C;j++)
                {
                if(G[i][j]==P[0][0])
                    {
                    int a=i-1,b=j-1,flag=1;
                    for(x=0;x<r;x++)
                        {a++;
                         b=j-1;
                        for(y=0;y<c;y++)
                            {b++;
                            if(G[a][b]==P[x][y])
                                {
                                
                                if((x+1)==r && (y+1)==c)
                                      {
                                      flag==0;
                                      f=1;
                                      cout<<"YES"<<endl;
                                      break;
                                  }
                               // b++;     
                            }
                            // cout<<a<<" "<<b<<endl;
                             //   cout<<x<<" "<<y<<endl;
                           else{
                                flag=0;
                                break;
                            }
                        }
                        if(flag==0)
                            {
                            break;
                        }
                       // a++;
                    }
                   
                }
            }
             if(f)
                  {
                  break;
              }
        }
        if(!f)
            {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
