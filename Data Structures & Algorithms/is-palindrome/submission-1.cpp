class Solution {
public:
    bool isPalindrome(string s) {
        string sentence = "";
        for (char c : s) {
            if (isalnum(c)) {
                sentence += tolower(c);
            }
        }

        return sentence == string(sentence.rbegin(), sentence.rend());
    }
};
