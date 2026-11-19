class Solution {
public:

    string encode(vector<string>& strs) {
      string ans ="";

      for(int i=0;i<strs.size();i++){
        ans+=to_string(strs[i].size())+"#"+strs[i];
      }
      return ans;
    }

    vector<string> decode(string s) {
      vector<string>ans;
      int i=0;
      
      while(i<s.size()){
       int len=0;
       while(s[i]!='#'){
        len=len*10+(s[i]-'0');
        i++;
       }
        i++;
        string word = s.substr(i, len);
        ans.push_back(word);
        i+= len;
       }
       return ans;
      }  
};
    

