class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child =0;
        int cookieindex =0;
        while(cookieindex<s.size()&& child<g.size()){
             if(s[cookieindex]>= g[child]){
                child++;
             }
             cookieindex++;
        }
        return child;
    }
};