class Solution {
public:
    string match(string a, string b) {
        string temp = "";

        int i = 0;

        while (i < a.size() && i < b.size()) {
            if (a[i] != b[i]) {
                break;
            }

            temp += a[i];
            i++;
        }

        return temp;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        string temp = strs[0];

        for (int i = 1; i < n; i++) {

            temp = match(temp, strs[i]);

            if (temp == "") {
                return "";
            }
        }

        return temp;
    }
};