class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> visit(256,false);
        int l=0,r=0,res=0;
        while(r<s.size())
        {
            if(visit[s[r]])
            {
                res=max(res,r-l);
                while(l<r && s[l]!=s[r])
                {
                    visit[s[l++]]=false;
                }
                visit[s[l++]]=false;
            }
            visit[s[r++]]=true;
        }
        res=max(res,r-l);
        return res;
    }
};
