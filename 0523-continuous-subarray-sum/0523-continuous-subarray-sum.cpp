class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

    if(nums.size()<2){
     return false;
    }
///////////////////////////////////////////////////////////////

    // vector<int>prefix(nums.size()+1);
    // prefix[0]=0;
    // for(int i=0;i<nums.size();i++){
    //     prefix[i+1]=prefix[i]+nums[i];    
    // }
    
//    for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 2; j <= nums.size(); j++) {
//                 if ((prefix[j] - prefix[i]) % k == 0) {
//                     return true;
//                 }
//             }
//         } o(n^2) TLE

/////////////////////////////////////////////
//logic:-
//    23,2,4,6,7   ->num
//  0,23,25,29,42  ->prefix sum
//  0,5 ,1 ,5 ,5 ,0 ->prefix %6

 int n=nums.size();
 int prefixREM=0;
 unordered_map<int,int>firstOcc;
 firstOcc[0]=0;

 for(int i=0;i<n;i++){
    prefixREM=(prefixREM+nums[i])%k;  //reminder of prefix sum value
    if(firstOcc.find(prefixREM) !=firstOcc.end()){//agar prefixREM value map me h
        if(i+1-firstOcc[prefixREM]>=2){  //length conditon also check
            return true;
        }
    }else{
        firstOcc[prefixREM]=i+1; //agar exist nhi karti toh assign kar do value ish index par 
    }
 }
 return false;
   
    }
};
