class Solution {
public:
   string defangIPaddr(string address) {
        string defangedIP = "";
        for (char i : address) {
            if (i == '.') {
                defangedIP += "[.]";
            } else {
                defangedIP += i;
            }
        }
        return defangedIP;
    }
};