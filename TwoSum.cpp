class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int j,k;
    bool p=false;
    for(j=0;j<nums.size();j++)
    {
        for(k=j+1;k<nums.size();k++)
        {
            if(nums[k]==target-nums[j]) 
            {p=true;break;}
        }
        if(p) break;
    }
    vector<int> tS;
    if(p) 
    {
        tS.push_back(j);
        tS.push_back(k);
    }
    return tS;}
};
