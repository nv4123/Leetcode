class Solution {
public:
    vector<int> getdigits(int num) {
        vector<int>digits;

        while(num>0){
            digits.push_back(num % 10);
            num /= 10;
        }

        return digits;
    }
    int smallestNumber(int n, int t) {
        while (n<=100) {
            vector<int> digits = getdigits(n);

            int product = 1;

            for (int d : digits) {
                product *= d;
            }

            if (product % t == 0) {
                return n;
            }

            n++;
        }
        return 1;
    }
};