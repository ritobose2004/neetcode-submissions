class Solution {
public:
    bool isPalindrome(string s) {
        string rev=s;
        int i=0;
        int j=rev.size()-1;
        while(i<j){
           if(!isalnum(rev[i])){
            i++;
           }
           else if(!isalnum(rev[j])){
            j--;
           }
           else{
            if(tolower(rev[i])!= tolower(rev[j])){
            return false;
           }
           i++;
           j--;
           }
        }
        return true;
    }
};
