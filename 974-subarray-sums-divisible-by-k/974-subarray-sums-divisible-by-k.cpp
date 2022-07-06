class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        unordered_map<int,int>rem;
        int sum=0,remainder=0;
        int ans=0;
        rem[0]=1;
        
        int n=nums.size();
        
        
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            remainder=sum%k;
            
            if(remainder<0)
            {
                remainder+=k; //converting negative remainder intto positive
            }
         
            if(rem.find(remainder)!=rem.end())
            {
                ans=ans+rem[remainder];
                rem[remainder]++; //remainder exists in the map so increase the count
            }
            else{
                rem[remainder]++;
            }
        }
        return ans;
    }
};