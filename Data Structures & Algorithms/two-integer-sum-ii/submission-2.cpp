class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sums;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            int diff = target - nums.at(i);
            if (sums.find(diff) != sums.end()) {
                return {sums[diff] + 1, i + 1};
            }

            sums.insert({nums[i], i});
        }

        return {};
    }
};
