void moveZeroes(vector<int>& nums) {
        int i=0,j;
        while(i<nums.size()){
        if(nums[i]==0){
            for(j=i+1;j<nums.size();j++){
                if(nums[j]>0||nums[j]<0){
                    swap(nums[i],nums[j]);
                    i++;
                }
            }
        }
        i++;
    }}