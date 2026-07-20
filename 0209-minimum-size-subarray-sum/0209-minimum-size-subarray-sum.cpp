class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left = 0;         
        int sum = 0;           
        int ans = INT_MAX;     

        for (int right = 0; right < nums.size(); right++) {
         sum += nums[right];//add next element until while condtion doent match

 // If the current window sum is enough,try to shrink the window from the left
            while (sum >= target) {
                // Update the minimum length
                ans = min(ans, right - left + 1);

                // Remove the leftmost element and increse the left pointer
                sum -= nums[left];
                left++;
            }
        }
        if (ans == INT_MAX) //base case
            return 0;
        return ans;
    }
};