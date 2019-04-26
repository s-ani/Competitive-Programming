class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::map<char, char> map;
        
        map['('] = ')';
        map['['] = ']';
        map['{'] = '}';
        
        if(s.size() % 2 != 0) {
            return false;
        }
        
        for(char c : s) {
            if(c == '(' || c == '[' || c == '{') {
                stack.push(c);
            }
            
            if(c == ')' || c == ']' || c == '}') {
                
                if(stack.empty()) {
                    return false;
                }
                
                char open = stack.top();
                if(map[open] == c) {
                    stack.pop();
                    continue;
                }
                return false;
            }
        }
        
        if(stack.size() == 0) {
            return true;
        }
        
        return false;
    }
};