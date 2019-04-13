class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size() < 1) return;
        int right = 0;
        int left = s.size() - 1;
        
        while(left > right){
            swap(s[left],s[right]);
            right++ ;
            left--;
        }
    }
};