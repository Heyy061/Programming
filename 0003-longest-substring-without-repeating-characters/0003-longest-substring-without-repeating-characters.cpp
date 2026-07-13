//storage each character in set and whenever duplicate come stop it and pass the length of set

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st; //time O(1) on delete and insert opertion
        int left = 0;
        int maxLength = 0;
//fixed left and move right
        for (int right = 0; right < s.size(); right++) { 

            while (st.find(s[right]) != st.end()) {  
                st.erase(s[left]);  //ye loop mujhe smajh nhi aaya
                left++;   //left remove
            }

            st.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
// space O(min(n, character_set_size))
//space worest O(n)
//time:-At first glance, the while loop looks like it could make the algorithm O(n²), but it doesn't.its O(2n)