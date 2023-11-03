class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }
    int missingNumber = expectedSum - actualSum;
    return missingNumber;
}
int main() {
    vector<int> nums = {3, 0, 1};
    int result = missingNumber(nums);
    cout << result <<endl;
    return 0;
}
    };