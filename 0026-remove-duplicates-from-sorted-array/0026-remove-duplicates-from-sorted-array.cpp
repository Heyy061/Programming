class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int st=0;
    while(st<nums.size()-1){
        int next=st+1;
        if(nums[st]==nums[next]){
            nums.erase(nums.begin()+next);
        }else{
            st++;
        
        }
    }
    return nums.size();
    }
  
};