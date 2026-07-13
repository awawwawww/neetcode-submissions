class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        for (int unsigned i = 0; i < nums.size(); i++) {
            for (int unsigned j = 0; j < nums.size(); j++) {
                if (i != j) {
                    if (nums.at(i) + nums.at(j) == target) {
                        indices.push_back(i);
                        indices.push_back(j);
                    }
                }

            }

            if (indices.size() != 0) {
                break;
            }
        }
        return indices;
    }
};
