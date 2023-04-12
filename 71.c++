class Solution {
public:
    string simplifyPath(string path) {
        vector<string> arr;
        stringstream ss(path);
        string token;
        
        while (getline(ss, token, '/')) {
            arr.push_back(token);
        }
        
        stack<string> stack;
        for (const auto& cur : arr) {
            if (cur == "..") {
                if (!stack.empty()) {
                    stack.pop();
                }
            } else if (cur != "." && cur != "") {
                stack.push(cur);
            }
        }
        
        string res;
        while (!stack.empty()) {
            res = "/" + stack.top() + res;
            stack.pop();
        }
        return res.empty() ? "/" : res;
    }
};