// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         unordered_map<int, int> elements;
//         for (int num : nums) {
//             if (elements.count(num)) {
//                 return true;
//             }
//             elements[num] = 1;
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            // .insert() returns a pair; .second is false if num already exists
            if (!seen.insert(num).second) {
                return true;
            }
        }
        return false;
    }
};