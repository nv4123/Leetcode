class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        vector<int>digits;
        while (x > 0) {
            digits.push_back(x % 10);
            x /= 10;
        }
        vector<int>temp=digits;
        reverse(temp.begin(),temp.end());

        if(temp==digits) return true;
        else return false;
    }
};