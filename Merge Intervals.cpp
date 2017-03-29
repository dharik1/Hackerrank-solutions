/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
class Solution {
public:
    vector<Interval> merge(vector<Interval>& inter) {
        if(inter.size()<=1)
        {
            return inter;
        }
        vector<Interval> ans;
        sort(inter.begin(),inter.end(),comp);
        ans.push_back(inter[0]);
        int ansi=0;
        for(int i=1;i<inter.size();i++)
        {
           // ans[ansi].start=min(inter[i].start,ans[ansi].start);
            if(inter[i].start>ans[ansi].end)
            {
               ans.push_back(inter[i]); 
               ansi++;
            }
            else{
                ans[ansi].end=max(inter[i].end,ans[ansi].end);
            }
        }
        return ans;
    }
static bool comp(const Interval& a,const Interval&  b)
{
    return a.start<b.start;
}
};
