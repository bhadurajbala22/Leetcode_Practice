class Solution {
public:
   int missingNumber(vector<int>& nums) 
   {
        int n = nums.size();
        int ans = n;
        for(int i = 0 ; i < n ; i++)
        {
            while(nums[i] != n and nums[i] != i)
            {
                swap(nums[i], nums[nums[i]]);
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] != i){
                ans = i;
                break;
            }
        }
        
        return ans;
        
    }
};