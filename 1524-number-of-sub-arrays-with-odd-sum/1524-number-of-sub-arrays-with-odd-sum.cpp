// class Solution {
// public:
//     int numOfSubarrays(vector<int>& arr) {
    //    int n=arr.size();
    //    int count=0;
      
  
    //    for(int left=0;left<n;left++){
    //     int sum=0;
    //      int right=left;
    //       while(right<n){
    //         sum=sum+arr[right];        
    //         if(sum%2==1){
    //         count++;
    //       }
    //       right++;
    //       }
    //    }
    //    return count; 
    //}}
//////////////////////////////////////////////////////////
//even+/-odd=odd and odd/+-even=odd
//whenever we get even number we will add oddCount to the ans and increase the evenCounter
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int evenCount = 1; // cuz intial prefix sum is zero and that is even
       int  oddCount = 0;
        int sum = 0, ans = 0;
        int MOD = 1000000007 ;

        for (int num : arr) {
            sum += num;

            if (sum % 2 == 0) {
                ans += oddCount;
                evenCount++;
            } 
            if(sum%2==1){
                ans += evenCount;
                oddCount++;
            }

            ans %= MOD;
        }

        return ans;
    }
};
       
