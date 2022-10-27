class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum=0;
        int large_sum=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
         if(large_sum<sum)
         {
             large_sum=sum;
         }
             if(sum<0)
             {
                 sum=0;
             }
            
        }
        return large_sum;
    }
};