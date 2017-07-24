class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> thS;
        sort(nums.begin(),nums.end());
        if(nums.size()<3) return thS;
        else if(nums.size()==3) if(nums[0]+nums[1]+nums[2]==0) {thS.push_back(nums);return thS;}
        for(int i=0;i<nums.size()-2;i++)
        {
            int begin=i+1;
            int end=nums.size()-1;
            while(begin<end)
            {
                if(nums[i]+nums[begin]+nums[end]==0) 
                {
                    vector<int> three;
                    three.push_back(nums[i]);
                    three.push_back(nums[begin]);
                    three.push_back(nums[end]);
                    thS.push_back(three);
                    three.clear();
                    begin++;
                    end--;
                    while(begin<end&&nums[begin]==nums[begin-1])
                        begin++;
                    while(begin<end&&nums[end]==nums[end+1])
                        end--;
                }
                else if(nums[i]+nums[begin]+nums[end]>0) end--;
                else begin++;
                
            }
            while(i<nums.size()-2&&nums[i]==nums[i+1]) i++;
            
        }
    return thS;
    }
};