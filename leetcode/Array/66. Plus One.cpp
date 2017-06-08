/*
Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.

You may assume the integer do not contain any leading zero, except the number 0 itself.

The digits are stored such that the most significant digit is at the head of the list.
*/

/* Author: Jiayu Liu */
/* Time: 6/8/17 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        for(int i = len-1; i>=0;) {
            if(digits[i] == 9) {
                digits[i] = 0;
                if(i--==0) {
                    digits.insert(digits.begin(), 1);
                    break;
                }
            }
            else {
                digits[i] += 1;
                break;
            }    
        }
        return digits;
    }
};