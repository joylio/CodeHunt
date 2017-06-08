/* 
   242. Valid Anagram
   Given two strings s and t, write a function to determine if t is an anagram of s.

  For example,
  s = "anagram", t = "nagaram", return true.
  s = "rat", t = "car", return false.
*/

 /* Author: Jiayu Liu */
 /* Time: 1/2/17 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
            
        int letter[26] = {0};
        for(int i=0;i<s.length();i++){
            letter[s[i]-'a']++;
            letter[t[i]-'a']--;
        }
        for(int j=0;j<26;j++){
            if(letter[j]!=0)
                return false;
        }
        return true;
    }
};

/* Follow up:
What if the inputs contain unicode characters? How would you adapt your solution to such case?
*/

class Solution {
public:
    bool isAnagram(std::wstring s, std::wstring t) {
        if(s.length() != t.length())
            return false;

        int n = s.length();
        
        std::map<char, int> letters;

        for(int i=0;i<)
    }
};