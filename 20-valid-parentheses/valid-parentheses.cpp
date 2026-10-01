class Solution {
public:
    bool isValid(string s) {
        stack<char> h;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                h.push(s[i]);
            }
            else if (s[i] == ')') {
                if (h.empty() || h.top() != '(') return false;
                h.pop();
            }
            else if (s[i] == '}') {
                if (h.empty() || h.top() != '{') return false;
                h.pop();
            }
            else if (s[i] == ']') {
                if (h.empty() || h.top() != '[') return false;
                h.pop();
            }
        }
        return h.empty();
    }
};