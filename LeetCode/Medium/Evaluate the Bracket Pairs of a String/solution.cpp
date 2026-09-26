class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> dict;
        for (int i = 0; i < knowledge.size(); i++) {
            dict[knowledge[i][0]] = knowledge[i][1];
        }
        string result = "";
        string key = "";
        bool inside = false;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                inside =true;
            } else if (s[i] == ')') {
                inside =false;
            
                if (dict.count(key)) {
                result += dict[key];
                } else {
                result += '?';
            }
            key = "";
        }
        else if (inside) {
            key += s[i];
        }
        else {
            result += s[i];
            }
        }
        return result;
    }
};