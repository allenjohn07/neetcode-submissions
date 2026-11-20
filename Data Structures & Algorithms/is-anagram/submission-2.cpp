// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length()) {
//             return false;
//         }

//         unordered_map<char, int> s1;
//         unordered_map<char, int> t1;

//         for (char c : s) {
//             s1[c]++;
//         }

//         for (char c : t) {
//             t1[c]++;
//         }

//         for (const auto& [key, count] : s1) {
//             if (count != t1[key]) {
//                 return false;
//             }
//         }

//         return true;
//     }
// };


//the first one was being timedout. so this was the one suggested by neetbot. First one was mine and it works :)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        vector<int> count(26, 0);

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int c : count) {
            if (c != 0) {
                return false;
            }
        }

        return true;
    }
};