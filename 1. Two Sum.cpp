class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(target-nums[i]))
            {
                res[0]=m[target-nums[i]];
                res[1]=i;
                return res;
            }
            m[nums[i]] = i;
        }
        return res;
    }
};
