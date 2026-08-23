//frequncy of s1 match karni h with frequency of window of s2 
//Best Approach: Sliding Window + Frequency Array
//ye most of case ke liye nhi work karyega
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    vector<int>freq1(26,0);
   
    int index1;
    int index2;

 for(int i=0;i<s1.size();i++){
        index1=s1[i]-'a';  // index find karna h
        freq1[index1]++;    //ush index ki value ++ karni h, intial value 0 H
    }

   int windowSize=s1.size();

 for(int i=0;i<s2.size();i++){ //expand
    vector<int>freq2(26,0); // we define it inside so that it reseat every iteration
   int left=0;  // window ka left pointer 0
   int right=i; // right pointer i
//these left and right are used to make a new window for every iteration

  while(left < windowSize && right<s2.size()){ //condition and shrink
    index2=s2[right]-'a';
     freq2[index2]++;
      left++;
      right++; // ye ishliye kiya taki window increse hoti rehe upto condition
      
  }
  if(freq1==freq2){
    return true;
}
 }
return false;
    }
};
////////////////////////////////////////////////////////////////
//optimal slideing window approch
// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         int n1 = s1.size();
//         int n2 = s2.size(); 
//         if (n1 > n2) return false;

//         vector<int> freq1(26, 0);
//         vector<int> freq2(26, 0);

//         // 1. Fill frequency for s1 and the VERY FIRST window of s2
//         for (int i = 0; i < n1; i++) {
//             freq1[s1[i] - 'a']++;
//             freq2[s2[i] - 'a']++;
//         }

//         // Check if the very first window is a match
//         if (freq1 == freq2) return true;

//         // 2. Slide the window across s2 one character at a time
//         for (int i = n1; i < n2; i++) {
//             // Add the new character entering the window (right side)
//             freq2[s2[i] - 'a']++;
            
//             // Remove the old character leaving the window (left side)
//             freq2[s2[i - n1] - 'a']--;

//             if (freq1 == freq2) {
//                 return true;
//             }
//         }

//         return false;
//     }
// };
