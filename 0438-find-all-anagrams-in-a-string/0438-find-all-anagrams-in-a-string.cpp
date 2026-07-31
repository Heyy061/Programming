//freq of p and freq of window s  is equal then retun index
// brute solution
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size()){
            return {};
        }
       int index1=0;
       int right=0;
       int index2=0;
       vector<int>v;
       vector<int>freqP(26,0);
//to calacuate the freq of p
for(int i=0;i<p.size();i++){
    index1=p[i]-'a';
    freqP[index1]++;
}

int windowSize=p.size();
for(int i=0;i<s.size()-windowSize+1;i++){
     vector<int>freqS(26,0);
int left=i;
int right=i;

while(right <left+windowSize){
 index2=s[right]-'a';
  freqS[index2]++;
  right++;
  }
  if(freqP==freqS){
    v.push_back(left);
   }
//agar hum ye nhi karyenge to loop resat hoga or right ki value 0 ho jayegi for next ireataion
   if(right-left>windowSize){ 
     index2=s[left]-'a';
     freqS[index2]--;
  }  
}
return v;
    }
};

//////////////////////////////////
//optimal solution

// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//        int index1=0;
//        int right=0;
//        int index2=0;
//        vector<int>v;
//        vector<int>freqP(26,0);
//        vector<int>freqS(26,0);

//to calacuate the freq of p

// for(int i=0;i<p.size();i++){
//     index1=p[i]-'a';
//     freqP[index1]++;
// }
// int windowSize=p.size();

//first window

// for(int i=0;i<windowSize;i++){
//     freqS[s[i]-'a']++;
// }
//     if(freqP==freqS){
//         v.push_back(0);
//     }
// int left=0;

//slid the window

// for(int right=windowSize;right<s.size();right++){
//     freqS[s[right]-'a']++;
//       freqS[s[left]-'a']--;//jo value 1 huvi thi wo dobara 0 ho jayegi
//       left++;
//       if(freqP==freqS){
//         v.push_back(left);
//     }
// } 
// return v;
//     }
// }