class Solution {
public:
    void moveZeroes(vector<int>& nums) {  //it is the most optimal approch , if we create a space and stored all zero in another array then it would 
  int spaceCreate=0;               // be good approch
  int i=0;
  while(i<nums.size()){
   if(nums[i]!=0){
 nums[spaceCreate]=nums[i];  
        //jo vacant space create kiya h usme non zero no store karna h
     spaceCreate++;
  }        //time complexity is o(n) space is o(1)
  i++; 
  }
  while(spaceCreate<nums.size()){
   nums[spaceCreate]=0;
    spaceCreate++;

  } 
  return ;    
    }
};
