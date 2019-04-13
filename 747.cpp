class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int res = 0;
        int max = 0;
        
        for(int i=0 ; i < nums.size() ; i++){
            //find max
            if(nums[i] > max){
                max = nums[i];
                res = i;
                cout << res;
            }
        }
        
        for(int i=0; i< nums.size() ; i++){
            if(i!=res && nums[i]*2 > max) {
                return -1;
            }
        }
        return res;
    }
};