class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> suffix(nums.size());
        vector<int> result(nums.size());
        
        result.at(0) = 1;
        for (int i = 1; i < nums.size(); ++i) {
            result.at(i) = result.at(i - 1) * nums.at(i - 1);
        }

        suffix.at(nums.size() - 1) = 1;
        result.at(nums.size() - 1) *= suffix.at(nums.size() - 1);
        for (int i = nums.size() - 2; i >= 0; --i) {
            suffix.at(i) = suffix.at(i + 1) * nums.at(i + 1);
            result.at(i) *= suffix.at(i);
        }

        return result;
    }
};
