Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
Example 1:
Input: nums = [3,0,1]
Output: 2
Explanation:
n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Example 2:
Input: nums = [0,1]
Output: 2

         //C Language
  int missingNumber(int* nums, int numsSize) {
    int actual_sum = 0;
    expected_sum = numsSize * (numsSize + 1) / 2;           //3*(3+1)/2 = 6
    for(int i = 0; i< numsSize; i++)
    {
      actual_sum += nums[i];                //total sum = 3 + 1 = 4
    }
 return expected_sum - actual_sum;
}
