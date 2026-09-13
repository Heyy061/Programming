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
        leftSum+=nums[i];//ye value increase hoti jayegi
        rightSum-=nums[i];//ye value decrease 
       
       }
return -1;
    }
};
//logic is:- rightSum h ye  sum of all indexes h and we r adding indexes at left and removing in rightSum if case is not equal