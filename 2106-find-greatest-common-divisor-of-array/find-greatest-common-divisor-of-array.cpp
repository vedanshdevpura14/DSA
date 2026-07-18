
class Solution {
public:
    int findGCD(vector<int>& arr) {
        int n = arr.size();
        int mi = INT_MAX;
        int mx = INT_MIN;
        for(int i =0 ; i<n; i++){
            mi = min(arr[i],mi);
            mx = max(arr[i],mx);
            
        }
        int ans;
        for(int i =1 ; i<=mi ; i++){
           if( mi%i==0 && mx%i==0)
           ans = i;
           
        }
        return ans;
    }
};