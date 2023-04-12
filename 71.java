class Solution {
    public String simplifyPath(String path) {
        String[] arr = path.split("/");
        Stack<String> stack = new Stack<>();
        
        for (String cur : arr) {
            if (cur.equals("..")) {
                if (!stack.empty()) {
                    stack.pop();
                }
            } else if (!cur.equals(".") && !cur.equals("")) {
                stack.push(cur);
            }
        }
        return "/" + String.join("/", stack);
    }
}