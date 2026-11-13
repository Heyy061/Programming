// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//                                                 Time Compelxity->o(n)
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>nums[i+1]){
//                 return i;
//             }
//         }
//         return nums.size()-1;
//     }
// };

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 0;
        int end = nums.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] > nums[mid + 1]) {//so there is chnace that peak is in left of mid incliding mid itself could be the peak.
                end = mid;
            }
            if(nums[mid]<nums[mid+1]) {
                st = mid+1;
            }
        }

        return st;// because if array have one elemet then it would always be peak as nums[-1] and nums[length+1]=minus infinity
    }
};
//so inshort if we are either going downhill or upHill we can get peak