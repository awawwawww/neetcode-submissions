class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate 'i' values

            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int target = nums.at(i) * -1;
                int curr = nums.at(j) + nums.at(k);

                if (curr < target) {
                    j++;
                } else if (curr > target) {
                    k--;
                } else {
                    results.push_back({nums.at(i), nums.at(j), nums.at(k)});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++; // skip duplicate 'j' values
                    while (j < k && nums[k] == nums[k + 1]) k--; // skip duplicate 'k' values
                }
            }
        }

        return results;
    }
};