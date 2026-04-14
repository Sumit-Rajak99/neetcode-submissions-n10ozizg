class Solution {
public:
    int calculate(string s) {
        long result = 0;
        long last = 0;
        long num = 0;
        char op = '+';

        for(int i = 0; i < s.length(); i++) {

            if(isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            // jab operator mile ya end ho
            if((!isdigit(s[i]) && s[i] != ' ') || i == s.length() - 1) {

                if(op == '+') {
                    result += last;
                    last = num;
                }
                else if(op == '-') {
                    result += last;
                    last = -num;
                }
                else if(op == '*') {
                    last = last * num;
                }
                else if(op == '/') {
                    last = last / num;
                }

                op = s[i];
                num = 0;
            }
        }

        return result + last;
    }
};