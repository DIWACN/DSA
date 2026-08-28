class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size()!=t.size()){
            return false;
        }  
        char mappingS[256]={0};
        char mappingT[256]={0};
        for (int i=0;i<s.size();i++){
            if(mappingS[s[i]]!= 0 && mappingS[s[i]]!= t[i]){
                return false;
            }
            if(mappingT[t[i]]!= 0 && mappingT[t[i]]!= s[i]){
                return false;
            }
            mappingS[s[i]]=t[i];
            mappingT[t[i]]=s[i];
        }
        return true;
    }
};