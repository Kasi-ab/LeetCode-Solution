class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;
        int n=s.length();
        for(int i=0;i<n;i++){
           freq[s[i]]++;
        }
        int m=t.length();
        if(s.length() != t.length()) return false;
        for(int i=0;i<m;i++){
           if(freq[t[i]] <= 0) return false;
           freq[t[i]]--;
        }
        return true;
    }
};
