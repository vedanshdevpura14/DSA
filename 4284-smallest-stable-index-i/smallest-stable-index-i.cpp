class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int left = INT_MIN , right =INT_MAX;
        for(int i = 0 ; i<nums.size(); i++){
            left = max(left, nums[i]);
            for(int j = i ; j< nums.size(); j++){
                right = min(right , nums[j]);
            }
            if(left-right<=k){
                return i;
            }
            right = INT_MAX;
        }
        return -1;
    }
};