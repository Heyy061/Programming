
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans = 0;
        int sum = 0;
        int left = 0; // Left pointer of the sliding window
        unordered_set<int> x;
    
        for (int i = 0; i < nums.size(); i++) { // 'i' acts as the right pointer
            // Check dublicate before, If nums[i] is already in the set
            while (x.find(nums[i]) != x.end()) {
                x.erase(nums[left]);//sub from set
                sum -= nums[left];//sub from sum
                left++;//shrink
            }          
            // Add current element to window
            x.insert(nums[i]);
            sum += nums[i];
            
            ans = max(ans, sum);  
        }        
        return ans;
    }
};