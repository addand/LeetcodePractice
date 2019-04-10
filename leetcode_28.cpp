//1.First solution : Rude solution
//@ use needle to be a seed of search index. ugly and complicate
int strStr(string haystack, string needle) {  
  
       if(needle.empty()) return 0;  
       if(haystack.empty() || needle.size() > haystack.size()) return -1;  
         
       int i=0;  
       int j=0;  
       bool flag = false;  
       int found = 0;  
       while(1){  
           if(needle[i] != haystack[j]) {  
             j++;  
             i=0;  
             if(flag){  
                j= found+1;  
                flag = false;  
             }   
           } else{  
  
               if(!flag){  
                  // cout << j << endl;  
                   found = j;  
                   flag = true;  
               }  
               i++;  
               j++;  
           }  
             
           if(i > needle.size() -1 ) break;  
           if(j > haystack.size() -1) break;  
           //if(haystack.size() - j < needle.size()) break;  
       }  
         
       if(i <= needle.size() -1 ) return -1;  
         
       return j-i ;  
   }  

//Solution 2: use haystack be a seed of search. it’s more easy and simple.
class Solution {  
public:  
    int strStr(string haystack, string needle) {  
        if(needle.empty()) return 0;  
        for(int i=0; i< haystack.size();i++){  
            if((i+needle.size()) > haystack.size()) return -1;  
            if(haystack[i] == needle[0]){  
                for(int j=0; j< needle.size();j++){  
                    if(needle[j] != haystack[j+i]) break;  
                    if(j == needle.size()-1) return i;  
                }  
            }  
        }  
        return -1;  
    }  
};  

//Solution 3:TODO KVM algorithm.