class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int presum = 0;
        vector<int> ans;
        ans.push_back(0);
        for(int i = 0 ; i< gain.size(); i++){
            presum+= gain[i];
            ans.push_back(presum);
        }
        int mx = 0;
        for(int i = 0 ; i< ans.size(); i++){
            mx = max(mx , ans[i]); 
        }
        return mx;
    }
};