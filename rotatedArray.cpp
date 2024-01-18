    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k%=n;
        int j=0;
        vector<int>temp(nums);
        int value;
        for(int i=0;i<k;i++){
            nums[i]=temp[n-k+i];
        }
        for(j=k;j<n;j++){
            nums[j]=temp[j-k];
        }
        }