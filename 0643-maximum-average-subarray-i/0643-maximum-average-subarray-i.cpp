class Solution {
public:

    double findMaxAverage(vector<int>& nums, int k) {
     int n=nums.size();
     int maxSum=INT_MIN;
     int sum;
     vector<int>prefix(n+1);
     //
     for(int i=0;i<n;i++){
      prefix[i+1]=prefix[i]+nums[i]; 
  }
    for(int i=k;i<n+1;i++){
     sum=prefix[i]-prefix[i-k];
     maxSum=max(maxSum,sum);
    }

    return  (double)maxSum / k;
    }
};