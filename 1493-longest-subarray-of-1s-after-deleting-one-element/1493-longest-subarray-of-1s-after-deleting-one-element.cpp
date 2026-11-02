//Maintain a window containing at most one 0.
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int right = 0;
        int zeros = 0;
        int ans = 0;

        for (int left = 0; left < nums.size(); left++) {
            if (nums[left] == 0) { //to check wheather the first index is 0 or not
                zeros++;
            }
// Agar zeros > 1 ho jaata hai, toh hum left ko aage move karte hain aur agar nums[left] == 0 yakni next elemet 0 hai, toh zeros-- kar dete hain. Aisa tab tak karte hain jab tak window mein maximum ek zero na bach jaaye.
            while (zeros > 1) { //
                if (nums[right] == 0) {
                    zeros--;
                }
                right++; //shrink the window when we get more than 1 zero
            }

            ans = max(ans, left - right);
        }

        return ans;
    }
};


//1. Brute force — O(n²) tle
//Idea: Try every possible subarray and count the number of 1s and 0s. We can keep a subarray if it contains at most one 0, because we can delete that zero.
// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//         int n = nums.size();
//         int ans = 0;

//         for (int i = 0; i < n; i++) {
//             int zeros = 0;

//             for (int j = i; j < n; j++) {
//                 if (nums[j] == 0)
//                     zeros++;

//                 if (zeros <= 1)
//                     ans = max(ans, j - i);
//                 else
//                     break;
//             }
//         }

//         return ans;
//     }
// };
