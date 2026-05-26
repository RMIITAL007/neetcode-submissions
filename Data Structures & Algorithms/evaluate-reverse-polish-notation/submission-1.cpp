class Solution {
    stack <int>s;
public:
    int evalRPN(vector<string>& tokens) {
        for(string c:tokens ){
             

                if (c == "+") {
                    int b = s.top();
                s.pop();

                int a = s.top();
                s.pop();
                    s.push(a + b);
                }
                else if (c == "-") {
                    int b = s.top();
                s.pop();

                int a = s.top();
                s.pop();
                    s.push(a - b);
                }
                else if (c == "*") {
                    int b = s.top();
                s.pop();

                int a = s.top();
                s.pop();
                    s.push(a * b);
                }
                else if (c == "/") {
                    int b = s.top();
                s.pop();

                int a = s.top();
                s.pop();
                    s.push(a / b);
                }
            
            else {
                s.push(stoi(c));
            }
        }
        return s.top();
    }
};
