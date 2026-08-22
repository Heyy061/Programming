class Solution {
public:
// this fnx check weather a char is vowel or not if yes than return 1 other wise 0
//we r returning count
    int isVowel(char c) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return 1;
        return 0;
    }

    int maxVowels(string s, int k) {
        int ans = 0;
        int count = 0;

        for(int i = 0; i < s.size(); i++) {

            // Add the new character
            count =count + isVowel(s[i]);

            // Remove the character outside the window
            if(i >= k) {
                 count=  count-isVowel(s[i - k]); //remove the first elemet of window
            }                                    //thats why we do (i-k)

            // Update maximum
            ans = max(ans,  count);
        }
        return ans;
    }
};
//Logic:-Keep a window of size k, add the incoming character's vowel value, remove the outgoing character's vowel value, and keep track of the maximum vowel count.