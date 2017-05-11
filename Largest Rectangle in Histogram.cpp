class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        if(h.size()==0)
        {
            return 0;
        }
        stack<int> s;
        int i=0;
        int ma=-1,a;
        while(i<h.size())
        {
            if(s.empty() || h[s.top()]<=h[i])
            {
                s.push(i);
                i++;
            }
            else{
                int tp=s.top();
                s.pop();
                if(s.empty())
                {
                  a=h[tp]*i;  
                }
                else{
                    a=h[tp]*(i-s.top()-1);
                }
                ma=max(ma,a);
            }
        }
        while(!s.empty())
        {
          int tp=s.top();
          s.pop();
                if(s.empty())
                {
                  a=h[tp]*i;  
                }
                else{
                    a=h[tp]*(i-s.top()-1);
                }
                ma=max(ma,a);  
        }
        return ma;
    }
};
