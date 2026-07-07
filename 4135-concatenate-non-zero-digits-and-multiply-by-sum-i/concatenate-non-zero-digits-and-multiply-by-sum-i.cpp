class Solution {
public:
    long long sumAndMultiply(int n) {
         if (n == 0) return 0; 
        string s = "";
        string res = "";
        s = to_string(n);
        int sum =0;
        for(int i = 0 ; i< s.size(); i++){
            if(s[i]=='0')
            continue;
            else{
            sum+= s[i] -'0';
            res.push_back(s[i]);
            }
        }
        long long ans = stoi(res);
        ans = ans*sum;
        return ans;
    }
};