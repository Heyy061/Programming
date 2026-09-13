// Brute solution
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//       int count=0;
//       for(int i=0;i<nums.size();i++){
//         int sum=0;
//         for(int j=i;j<nums.size();j++){
//             sum=sum+nums[j];
//         if(sum==k){
//             count++;
//         }
//         }

//       }  
//       return count;
//     }
// };

////////////////////////////////////////////////////////
//optimal sol
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        int currentSum=0;
        unordered_map<int,int>m;
          m[0] = 1; //create a map and stored intilly key value zero

        for(int i=0;i<nums.size();i++){
            currentSum+=nums[i];
             if (m.find(currentSum - k) != m.end()) {//it mean that is the key in map if yes then increase the freq of key value++
                ans += m[currentSum - k];
            }
            m[currentSum]++;
        }
        return ans;
    }
};
// for( auto i:nums){
        //     current+=i;
        // } it other way to write for loop