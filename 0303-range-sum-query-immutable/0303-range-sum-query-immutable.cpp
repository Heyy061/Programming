class NumArray {
public:
     vector<int>x;
    NumArray(vector<int>& nums) {//constructor automatially called
        x=nums;
    }
    
    int sumRange(int left, int right) {
      int sum=0;
      for(int i=left;i<=right;i++){
        sum=sum+x[i];
      }  
    return sum;
    }
};
