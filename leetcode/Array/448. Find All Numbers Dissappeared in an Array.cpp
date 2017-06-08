/*
Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements of [1, n] inclusive that do not appear in this array.

Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

Example:

Input:
[4,3,2,7,8,2,3,1]

Output:
[5,6]
*/

/* Author: Jiayu Liu */
/* Time: 6/8/17 */

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> FindDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int len = nums.size();
        for(int i = 0; i<len; i++) {
            res.push_back(0);
        }
        for(int i = 0; i<len; i++) {
            int num = nums[i];
            res[num-1]++;
        }
        vector<int> sol;
        for(int i = 0; i<len; i++) {
            if(res[i]==0)
                sol.push_back(i+1);
        }
        return sol;
    }
};