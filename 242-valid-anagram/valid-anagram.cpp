class Solution {
public:
    bool isAnagram(string s, string t) {
        int countS[26]={0};
        int countT[26]={0};
        for(int i=0;i<s.size();i++){
            countS[s[i] - 'a']++;
        }
        for(int i=0;i<t.size();i++){
            countT[t[i] - 'a']++;
        }
        for(int i=0;i<26;i++){
        if(countT[i]!=countS[i]){
            return false;
        }
    }        return true;
    }
};