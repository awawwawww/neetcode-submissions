class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> countLetters;

        for (string word : strs) {
            vector<int> freq(26, 0);

            for (char letter : word) {
                freq[letter - 'a']++;
            }

            string key = to_string(freq[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(freq[i]);
            }

            countLetters[key].push_back(word);
        }

        vector<vector<string>> result;
        for (const auto& pair : countLetters) {
            result.push_back(pair.second);
        }
        return result;
    }
};
