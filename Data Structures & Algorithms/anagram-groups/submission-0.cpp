class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groupMap;
        vector<vector<string>> ans;

        for (const auto& strsElement : strs) {
            string sortedString = strsElement;
            sort(sortedString.begin(), sortedString.end());
            groupMap[sortedString].push_back(strsElement);
        }

        for (const auto& pair : groupMap) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};
