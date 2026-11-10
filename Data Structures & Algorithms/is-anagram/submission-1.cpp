class Solution {
public:
    bool isAnagram(string s, string t) {
        int x=s.size();
        int y=t.size();
        if(x!=y){
            return false;
        }
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(int i=0;i<x;i++){
            freq1[s[i]]++;
            freq2[t[i]]++;
        }
         if(freq1==freq2){
          return true;
          }
     return false;
    }
};
