class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> strStack;
        
        string current = "";
        int k = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                k = k * 10 + (ch - '0');  // handle multi-digit
            }
            else if (ch == '[') {
                countStack.push(k);
                strStack.push(current);
                
                k = 0;
                current = "";
            }
            else if (ch == ']') {
                int repeat = countStack.top(); countStack.pop();
                string prev = strStack.top(); strStack.pop();
                
                string temp = "";
                for (int i = 0; i < repeat; i++) {
                    temp += current;
                }
                
                current = prev + temp;
            }
            else {
                current += ch;
            }
        }
        
        return current;
    }
};