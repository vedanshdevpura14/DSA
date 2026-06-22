class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string word = "balloon";
        unordered_map<char , int> mp;
        for(int i = 0 ; i< text.size(); i++){
             mp[text[i] -'a']++;
        }
        return min({
            mp['b'- 'a'],
            mp['a'- 'a'],
            mp['l'- 'a']/2,
            mp['o'- 'a']/2,
            mp['n'- 'a']
        });
        return 0;
    }
};