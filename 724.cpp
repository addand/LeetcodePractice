class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() < 2) return -1;
        int p=0;
        while(1){
            int lsum =0;
            int rsum =0;
            //left sum
            for(int i=0;i<p;i++){
                lsum += nums[i];
            }
            //right sum
            for(int j=nums.size()-1; j>p;j--){
                rsum += nums[j];
            }
            if(lsum == rsum) return p;
            p++;
            if(p > nums.size()-1) return -1;
        }
       
    }
};