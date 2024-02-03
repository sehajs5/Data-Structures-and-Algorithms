int maxArea(vector<int>& height) {
int left=0;
int right= height.size()-1;
    int area=0;
while(left<right){

    int x= min(height[left],height[right]);
    int w= right-left;
    if(area<(x*w)){
        area=x*w;
    }
    
    if(height[left]<height[right]){
        left++;
    }
    else{
        right--;
    }
}
return area;

}