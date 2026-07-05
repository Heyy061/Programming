class Solution {
public:
    int maxArea(vector<int>& height) {
    int st =0;
    int end=height.size()-1;
    int maxArea=0;
    int area;
    int l;
    int b;

    while(st<end){
      l=end-st;
      b=min(height[st],height[end]);
      area=l*b;
      maxArea=max(area,maxArea);

        if(height[st]>height[end]){
            end--;
        }else{
            st++;
        }

    }
return maxArea;
    }
};