class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size() + 1);

        for (int num : nums) {
            count[num]++;
        }
        
        for (const auto& [key, value] : count) {
            freq[value].push_back(key);
        }

        vector<int> result;
        for (int i = freq.size() - 1; i > 0; --i) {
            for (int num : freq[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            } 
        }

        return result;

    }
};
