class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int> mp;
        for(int i = 0 ; i< s.size() ; i++){
               mp[s[i]]++;
        }
        string ans ="";
        priority_queue<pair<int, char>> pq;

        for (auto &it : mp) {
            pq.push({it.second, it.first});
        }
         while (!pq.empty()) {
            int freq = pq.top().first;
            char ch = pq.top().second;
            pq.pop();

            ans += string(freq, ch);
        }
        return ans;
    
    }
};