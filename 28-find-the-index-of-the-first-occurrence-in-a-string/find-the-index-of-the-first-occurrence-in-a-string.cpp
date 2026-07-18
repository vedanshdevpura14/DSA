class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size() ,  m = needle.size();
        for(int i = 0 ; i<= n-m ; i++){
            int first = i , second = 0;
            while(second<m){
                if(haystack[first]==needle[second]){
                    second++ ,first++;
                    
                }
                else{
                    break;
                   // first++;
                }  
                
            } 
            if(second==m)
                return first - second;
        } 
        return -1;
    }
};