class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums.at(i);
            if (num == target) {
                return i;
            }
        }
        return -1;
    }
};
