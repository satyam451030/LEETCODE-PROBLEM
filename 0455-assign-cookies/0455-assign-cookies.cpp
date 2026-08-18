class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        int m = g.size();
        int n = s.size();

        int child = 0;
        int cookie = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while (child < m && cookie < n) {

            if (s[cookie] >= g[child]) {
                child++;
                cookie++;
            }
            else {
                cookie++;
            }
        }
        return child;
    }
};