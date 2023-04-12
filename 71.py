class Solution:
    def simplifyPath(self, path: str) -> str:
        arr = path.split("/")
        stack = []
        
        for cur in arr:
            if cur == "..":
                if stack:
                    stack.pop()
            elif cur != "." and cur != "":
                stack.append(cur)
                
        return "/" + "/".join(stack)
