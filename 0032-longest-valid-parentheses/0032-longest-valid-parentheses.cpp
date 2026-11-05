class Solution {
public:
    int longestValidParentheses(string s) {
        int ans = 0;
        int sum = 0;
        int start = 0;
//////////////////////////////////          '(' =>1 , ')' =>-1
//  index:     0   1   2   3   4   5
// char:       (   (   )   (   )   )
// value:      1   1  -1   1  -1  -1
// prefix:     1   2   1   2   1   0

////////////////////////////////////
        // Left -> Right
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '('){
                sum++;  //+1
            }else{
                sum--; //-1
             }

            if (sum < 0) { //if ')' comes reaset the value ,look at example 2
                sum = 0;
                start = i + 1;
            }

            if (sum == 0) {
                ans = max(ans, i - start + 1);
            }
        }

        //s = "((())" for such case
        // Right -> Left
        sum = 0;
        start = s.length() - 1;
        for (int i = s.length() - 1; i >= 0; i--) {

            if (s[i] == ')')
                sum++;
            else
                sum--;

            if (sum < 0) {
                sum = 0;
                start = i - 1;
            }

            if (sum == 0) {
                ans = max(ans, start - i + 1);
            }
        }

        return ans;
    }
};