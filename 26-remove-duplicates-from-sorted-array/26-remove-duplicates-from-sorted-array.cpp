class Solution {
public:
         int removeDuplicates(vector<int>& nums) 
         {
             int right;
             
             int left = 0;
             
             int n  = nums.size();

             for(right = 1; right < n; right++)
                 
                 
             if(nums[left] != nums[right]) 
                 
             nums[++left] = nums[right];

         return left+1;
  } 

}; 