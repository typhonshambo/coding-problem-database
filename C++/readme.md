# Reverse Words in a String
Reverse Words in a String
Solved 
Medium Level
Topics :- Companies , Leetcode

Hint: - When reversing words in a string, you can iterate through the string in reverse order. 
        Use a buffer to build each word in reverse and then append it to the result string. 
        Don't forget to handle spaces and trim the trailing space at the end.

 

EXAMPLES:
```
Example 1:
Input: s = "the sky is blue"
Output: "blue is sky the"

Example 2:
Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

Example 3:
Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
```
 
Constraints:
1. 1 <= s.length <= 104
2. s contains English letters (upper-case and lower-case), digits, and spaces ' '.
3. There is at least one word in s.
 

Follow-up: If the string data type is mutable in your language, can you solve it in-place with O(1) extra space?


TIME COMPLEXITY
```
The time complexity of the provided code is O(n), where "n" is the length of the input string.

Here's why:

The code iterates through the entire input string once, which is an O(n) operation.
The code processes each character in the input string only once, performing constant-time operations for each character. 
After the loop, there is another constant-time operation to remove the trailing space.
Therefore, the overall time complexity is O(n), where "n" is the length of the input string.
```