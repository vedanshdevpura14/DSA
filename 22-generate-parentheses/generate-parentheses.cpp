class Solution {
public:
      void permute(int left , int right , int n , vector<string>& ans ,string &temp){
          if(left+right == 2*n){
            ans.push_back(temp);
            return;
          }
          if(left<n){
            temp.push_back('(');
            permute(left+1 , right , n , ans , temp);
            temp.pop_back();
          }
          if(right<left){
            temp.push_back(')');
            permute(left , right+1 , n , ans , temp);
            temp.pop_back();
          }
      }

    vector<string> generateParenthesis(int n) {
    vector<string>ans;
    string temp;
    permute(0 , 0 , n , ans , temp);
    return ans;

    }
};