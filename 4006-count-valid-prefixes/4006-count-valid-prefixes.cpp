class Solution {
public:
    int countValidPrefixes(string s) {
        int zero=0, one=0, ans=0;

        for (char ch:s){
            if (ch == '0') zero++;
            else one++;

            int x=max(zero,one);
            int y=min(zero,one);

            if(y>=x-1) ans++;
        }
        return ans;
    }
};