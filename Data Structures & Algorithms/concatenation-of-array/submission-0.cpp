class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> results(n * 2, 0);

        for (int i = 0; i < n; ++i) {
            results[i] = nums[i];
            results[i + n] = nums[i];
        }

        return results;

    }
};