class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> elements;
        for (int num : nums) {
            if (elements.count(num)) {
                return true;
            }
            elements[num] = 1;
        }
        return false;
    }
};