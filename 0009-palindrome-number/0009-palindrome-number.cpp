class Solution {
public:
    bool isPalindrome(int x) {
      long p = x;
long r = 0;
while(x>0){
    int ld = x % 10;
    r = r*10 + ld;
    x = x /10;
}
if(p == r){
    return true;
}
else
return false;  
    }
};