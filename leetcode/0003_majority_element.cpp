/* Given an array nums of size n, return the majority element.
   The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
   Input: nums = [2,2,1,1,1,2,2]
   Output: 2
 */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};
