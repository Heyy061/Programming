class Solution {
public:
    int findMin(vector<int>& nums) {
      int st=0;
      int end=nums.size()-1;
      int minValue=INT_MIN;

      while(st<end){
        int mid=st+(end-st)/2;

        if(nums[mid]>nums[end]){          
            st=mid+1;
        }
        if(nums[mid]<nums[end]){           
              end=mid;
          
        }   
      }  
      return nums[st];
    }
};