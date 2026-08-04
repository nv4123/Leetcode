class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int first=nums[0];
        int last=nums[nums.size()-1];
        unordered_set<int> abc(nums.begin(), nums.end());

        vector<int>arr;

        for(int i=first+1;i<last;i++){
            if(!abc.contains(i)){
                arr.push_back(i);
            }
        }
        return arr;
    }
};