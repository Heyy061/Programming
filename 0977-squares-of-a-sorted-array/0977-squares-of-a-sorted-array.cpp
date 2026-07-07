class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int begin=0;
       int end=nums.size()-1;
       vector<int>x;  //O(n)

        for (int i=0;i<nums.size();i++){
            nums[i]=(nums[i])*(nums[i]);  //O(n)

        }
     
      while(begin<=end){        //two pointer O(n)      
        if(nums[begin]<=nums[end]){
            x.push_back(nums[end]);
            end--;
        }else{
       x.push_back(nums[begin]);
       begin++;
        }
      }
  reverse(x.begin(),x.end());

   
        return x;
    }
};