class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum =nums[0] ;
        int maxsum =nums[0] , currmax=nums[0];
        int minsum =nums[0] , currmin=nums[0];
        
        for(int i = 1 ; i<nums.size(); i++){
            totalsum+=nums[i];

            currmax= max(nums[i], currmax+nums[i]);
            maxsum = max(maxsum , currmax);

            currmin= min(nums[i], currmin+nums[i]);
            minsum = min(minsum , currmin);

        }
        if(maxsum<0){
            return maxsum;
        }
        return max(maxsum , totalsum-minsum);
    }
};