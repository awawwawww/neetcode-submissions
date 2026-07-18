class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for (string s : strs) {
            int size = s.size();
            res += to_string(size) + "#" + s;
        }

        return res;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> result;

        while (i < s.size()) {
            string s_size = "";
            while (s.at(i) != '#') {
                s_size += s.at(i);
                ++i;
            }

            int size = stoi(s_size);
            ++i; // skip #
            
            string curr = s.substr(i, size);

            result.push_back(curr);

            i += size;
        }

        return result;
    }
};
