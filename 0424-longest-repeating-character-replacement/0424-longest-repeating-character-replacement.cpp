// brute solution ,it not a sliding window we just use we loops
//whenever the string only consist lower/upper words use frequency concept

// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int ans = 0;
//         for (int left = 0; left < s.size(); left++) {
//             vector<int> freq(26, 0);
//             int maxFreq = 0;

//             for (int right = left; right < s.size(); right++) {
//                 freq[s[right] - 'A']++;
//                 maxFreq = max(maxFreq, freq[s[right] - 'A']);

//                 int windowSize = right - left + 1;

//                 if (windowSize - maxFreq <= k) { //
//                     ans = max(ans, windowSize);
//                 } //O(n^2)
//             }
//         }
//         return ans;
//     }
// };


  //by Sliding Window
class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);

        int right = 0;     // Shrinking pointer
        int maxFreq = 0;
        int maxNo = 0;
        
        for (int left = 0; left < s.size(); left++) {   // Expanding pointer
            freq[s[left] - 'A']++;

            maxFreq = max(maxFreq, freq[s[left] - 'A']);

            while ((left - right + 1) - maxFreq > k) {
                freq[s[right] - 'A']--;
                right++;
            }

            maxNo = max(maxNo, left - right + 1);
        }

        return maxNo;
    }
};

