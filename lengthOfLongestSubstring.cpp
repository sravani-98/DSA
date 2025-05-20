/*
3. Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without duplicate characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
*/

/*
Algorithm: Longest Substring Without Repeating Characters
Input: A string s
Output: Length of the longest substring without repeating characters

✅ Steps:
1.Initialize:
  unordered_map<char, int> lastSeen to store the last index of each character.
  int l = 0 → left pointer of the sliding window.
  int maxLength = 0 → to store the result.
  
2.Iterate through the string using right pointer r:
  For each character s[r]:
      If s[r] is found in lastSeen and lastSeen[s[r]] >= l:  
      This means the character is repeated within the current window.
  Move the left pointer l to lastSeen[s[r]] + 1 to exclude the previous occurrence.
  Update lastSeen[s[r]] = r to record the current index of the character.
  Update maxLength = max(maxLength, r - l + 1) to track the maximum window size.
3.Return maxLength after the loop ends.

🧠 Time and Space Complexity:
Time Complexity: O(n), where n is the length of the string. Each character is visited at most twice.
Space Complexity: O(min(n, m)), where m is the size of the character set (e.g., 26 for lowercase letters, 128 for ASCII).

*/

#include<iostream>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s){
  unordered_map<char, int> lastSeen;
  int l=0, maxLen=0;

  for(int r=0; r< s.length(); r++){
    char curChar = s[r];
    
    // If the character was seen and is within the current window
    if(lastSeen.find(curChar) != lastSeen.end() && lastSeen[curChar] >= l){
          l= lastSeen[curChar] +1; // Move left pointer past the last occurrence
    }
    lastSeen[curChar] =r; // Update last seen index
    maxLen = max(maxLen, r-l+1); // Update max length
    
  }
  return maxLen;
}

int main(){
  string str = "abcabcbb";
  int len = lengthOfLongestSubstring(str);
  cout<<len<<endl;

}











