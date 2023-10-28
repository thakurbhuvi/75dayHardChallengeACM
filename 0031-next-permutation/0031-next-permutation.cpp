#include<iostream>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int a = nums.size();
    int i = a - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }
    if (i >= 0)
{
        int j = a - 1;
        while (j > i && nums[j] <= nums[i]) {
        j--;
}
swap(nums[i], nums[j]);
}
reverse(nums.begin() + i + 1, nums.end());
}
int main()
{
    int t;
    cin >> t;  
    while (t--) 
        {
        int a;
        cin >> a;  
        vector<int> nums(a);
        for (int i = 0; i < a; i++) {
            cin >> nums[i];  
        }
   nextPermutation(nums);
        
for (int num : nums) 
{
cout << num << " ";
}
cout <<endl;
}
return 0;
}};