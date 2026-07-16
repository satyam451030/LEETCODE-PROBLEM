class Solution {
    private:
    bool isalnum(char c){
        return ((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z') || (c >= '0' && c <='9'));
    }
    char tolower(char c){
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <='9')){
            return c;
        }
        return c + 32;
    }
    bool check (string s){
        int left = 0;
        int right = s.size() - 1;
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string t = "";
        for(char c : s){
            if(isalnum(c)){
                t += tolower(c);
            }
        }
        return check(t);
    }
};