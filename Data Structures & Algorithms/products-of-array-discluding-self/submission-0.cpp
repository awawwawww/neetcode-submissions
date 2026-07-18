class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
        
        prefix.at(0) = 1;
        for (int i = 1; i < nums.size(); ++i) {
            prefix.at(i) = prefix.at(i - 1) * nums.at(i - 1);
        }

        suffix.at(nums.size() - 1) = 1;
        for (int i = nums.size() - 2; i >= 0; --i) {
            suffix.at(i) = suffix.at(i + 1) * nums.at(i + 1);
        }

        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            result.at(i) = prefix.at(i) * suffix.at(i);
        }

        return result;
    }
};
