class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int ans;
       int n=nums.size();
       int rightSum=0;
       int leftSum=0;

       for(int i=0;i<n;i++){
        rightSum+=nums[i];
       }

       for(int i=0;i<n;i++){
         if(leftSum==rightSum-nums[i]){
            return i;
        }
        leftSum+=nums[i];
        rightSum-=nums[i];
       
       }
return -1;
    }
};