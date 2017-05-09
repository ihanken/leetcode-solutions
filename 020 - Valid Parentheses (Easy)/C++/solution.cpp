class Solution {
public:
    bool isValid(string s) {
        stack<char> cStack; // Initialize our stack.

        for (char c : s) {
            switch (c) { // Switch statement for compiler optimization.
            case '(': // Drop through to '['.
            case '{': // Drop through to '['.
            case '[': // Push our current char onto the stack and break.
                cStack.push(c);
                break;
            case ')': // Check the top of the stack for a '('.
                if (cStack.empty() || cStack.top() != '(') return false;
                else cStack.pop(); // Pop the stack if the pair was found.
                break;
            case '}': // Check the top of the stack for a '{'.
                if (cStack.empty() || cStack.top()!='{') return false;
                else cStack.pop(); // Pop the stack if the pair was found.
                break;
            case ']': // Check the top of the stack for a '['.
                if (cStack.empty() || cStack.top()!='[') return false;
                else cStack.pop(); // Pop the stack if the pair was found.
                break;
            default: break; // Should never get here.
            }
        }

        return cStack.empty(); // Make sure we finish with an empty stack.
    }
};
