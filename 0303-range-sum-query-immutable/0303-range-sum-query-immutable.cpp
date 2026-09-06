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
// optimal solution by prefix sum
// class NumArray {
// public:
//     vector<int> prefix;

//     NumArray(vector<int>& nums) {
//         prefix.push_back(0);

//         for (int i = 0; i < nums.size(); i++) {
//             prefix.push_back(prefix.back() + nums[i]);
//         }
//     }

//     int sumRange(int left, int right) {
//         return prefix[right + 1] - prefix[left]; 
//     }
// };
