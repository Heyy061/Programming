//frequncy of s1 match karni h with frequency of window of s2 
//Best Approach: Sliding Window + Frequency Array

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
      right++; // ye ishliye kiya taki window indrese hoti rehe upto condition
      
  }
  if(freq1==freq2){
    return true;
}
 }
return false;
    }
};