class Solution {
public:
    int jump(vector<int>& nums) {
        int maxstep=0;
        int premaxstep=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            
            if((nums[i]+i)>premaxstep)
            {
                
                if(i<=premaxstep)
                   maxstep=(nums[i]+i)>maxstep? (nums[i]+i):maxstep;
                else
                {
                    ++sum;
                    --i;
                    premaxstep=maxstep;
                }
            }
        }
        return sum;
        
    }
};
