class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       // if (k <= 1) return 0;

        int left = 0;
        int right = 0;
        int product = 1;
        int count = 0;
        while (right < nums.size()) {   //O(n+n)=O(n) cuz 2nd loop only run
            product *= nums[right];     //one time 

            while (product >= k) {
                product /= nums[left];
                left++;
            }
            count += (right - left + 1);
            right++;
        }
        return count;
    }
};