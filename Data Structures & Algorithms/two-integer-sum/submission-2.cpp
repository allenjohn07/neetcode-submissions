class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int diff;
        unordered_map<int, int> lookup;
        for(int i=0; i<nums.size(); i++){
            diff = target - nums[i];
            if(lookup.count(diff)){
                ans.push_back(lookup[diff]);
                ans.push_back(i);
                return ans;
            }
            lookup.insert({nums[i], i});
        }
    }
};
