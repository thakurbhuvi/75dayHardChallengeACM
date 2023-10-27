class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
       int current = 0, max= nums[0];
for(int i=0; i<nums.size(); i++)
{
 current = current + nums[i];
if(current > max)
 max = current;
if(current < 0)
 current = 0;
}
return max;
}
int main()
{
vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
cout<<maxSubArray(nums)<<endl;
return 0;
} 
    };
