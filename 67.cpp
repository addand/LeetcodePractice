class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        int au,bu;
        string res = "";
        
        while( i>=0 || j>=0  || carry >=1 ){
            au = bu = 0;
            if(i >= 0) au = a[i] - '0';
            if(j >= 0) bu = b[j] - '0';
            res = to_string( au ^ bu ^ carry) + res;
            carry = (au & bu) | (au & carry) | ( bu & carry);
            i--;
            j--;
        }
        return res;
    }
};