class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(int i = 0 ; i< n; i++){
            int req = target - arr[i];
            if(mp.count(req)){
                return{mp[req],i};
            }
            mp[arr[i]]=i; //map
        }
       
        // for(int i = 0; i < n; i++) {
        //     for(int j = i + 1; j < n; j++) {
        //         if(arr[i] + arr[j] == target) {
        //             return {i, j};
        //         }
        //     }
        // }
        return {};
    }
};
