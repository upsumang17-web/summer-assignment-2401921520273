class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort (strs.begin(),strs.end());
        int a=0;string ans="";
        string s1=strs[0],s2=strs[strs.size()-1];
         while(a < s1.size() && a < s2.size() && s1[a] == s2[a])
        {
            
           a++;
        
        }
        if (a!=0)
        {
            ans=s1.substr(0,a);
        }
        return ans;
        
    }

};
