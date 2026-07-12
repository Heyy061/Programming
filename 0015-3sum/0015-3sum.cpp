class Solution {
public:
//convert it two sum problem by fixing one number then use two pointer approch
    vector<vector<int>> threeSum(vector<int>& nums) {
      int st=0;
      int end=nums.size()-1;
      set<vector<int>>s;  //set to remove duplicate
 
      sort(nums.begin(),nums.end()); //O(nlogn)
      
for(int i=0;i<nums.size()-2;i++){
    int fixed=i;
    int next=i+1;
    int end=nums.size()-1; //we have to define it again cuz every next ieration 'i' there is no end named varible

    //Now use two pointer
    while(next<end){
        if(nums[fixed]<(-(nums[next]+nums[end]))){
            next++;
        }else if(nums[fixed]>(-(nums[next]+nums[end]))){
         end--;
        }else{
            s.insert({nums[fixed],nums[next],nums[end]});
            next++;  // it can be for more triplets whose sum is zero
            end--;
        }}}
     //set converted to vector so we can return it ,function vector ka h
      vector<vector<int>>ans(s.begin(),s.end()); 
      return ans;
    
    }
};
//time O(n*n)
//space O(n)