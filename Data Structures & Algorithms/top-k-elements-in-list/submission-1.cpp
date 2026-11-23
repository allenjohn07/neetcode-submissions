class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numsMap;
        //adding the element to the hashmap
        // {1:2, 2:3, 3: 4}
        for(int num: nums){
            numsMap[num]++;
        }

        //[ with ()] -> like a tuple
        vector<pair<int, int>> arr;
        for(const auto& p: numsMap){
            // add the freq first for sorting it based on that
            arr.push_back({p.second, p.first});
        }
        // arr becomes [(2, 1), (3, 2), (4, 3)]

        sort(arr.rbegin(), arr.rend());
        // arr becomes [(4, 3), (3, 2), (2, 1)]

        // we will loop till k times and take the second value from here and add that to a res vector
        //so we get [3, 2]
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};
