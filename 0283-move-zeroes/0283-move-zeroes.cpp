class Solution {
public:
    void moveZeroes(vector<int>& nums) {
  int spaceCreate=0;
  int i=0;
  while(i<nums.size()){
   if(nums[i]!=0){
 nums[spaceCreate]=nums[i];  
        //jo vacant space create kiya h usme non zero no store karna h
     spaceCreate++;
  } 
  i++; 
  }
  while(spaceCreate<nums.size()){
   nums[spaceCreate]=0;
    spaceCreate++;

  } 
  return ;    
    }
};