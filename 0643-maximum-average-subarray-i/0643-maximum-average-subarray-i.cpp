class Solution {
public:
//add right element and remove left element in window
    double findMaxAverage(vector<int>& nums, int k) {
  int left=0;
  int right=0;
  int end=nums.size()-1;
 int sum=0;
 int maxSum=INT_MIN;
 double result;
 
  for(int left=0;left<=end-k+1;left++){
    while(right<left+k){       //time O(n)
      sum=sum+nums[right];
       right++;
    }
   
maxSum=max(sum,maxSum);
  sum=sum-nums[left];  //to remove leftmost element and add right element
  }
  result=(double)maxSum/k;  // otherwise it give integer
return result;
    }
};