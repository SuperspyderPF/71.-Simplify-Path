/**
 * @param {string} path
 * @return {string}
 */
var simplifyPath = function(path) {
    // split the path by '/'
    const arr = path.split('/');
    const stack = [];
    
    for (let i = 0; i < arr.length; i++) {
        const cur = arr[i];
        // if the current element is "..", pop the last element from stack
        if (cur === '..') {
            stack.pop();
        }
        // if the current element is not "." or an empty string, push it to stack
        else if (cur !== '.' && cur !== '') {
            stack.push(cur);
        }
    }
    // join the elements in stack with '/' and return
    return '/' + stack.join('/');
};
