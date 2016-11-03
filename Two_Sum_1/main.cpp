class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> tmpnums=nums;
       sort(nums.begin(),nums.end());
       int tmp1=0;
       int tmp2=0;
       int flag=0;
       for(int i=0;i<nums.size();i++)
       {
           if(flag==1)
            break;
         for(int j=0;j<nums.size();j++)
         {
             if((nums[j]+nums[i])<target)
             continue;
             if((nums[j]+nums[i])==target)
             {
                 tmp1=nums[i];
                 tmp2=nums[j];
                 flag=1;
                 break;
             }
             break;
         }
       }
       vector<int> res;
       for(int i=0;i<tmpnums.size();i++)
       {
           if(tmpnums[i]==tmp1||tmpnums[i]==tmp2)
              res.push_back(i+1);
       }
       return res;
       
    }
};