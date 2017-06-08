/* 
   350. Intersection of Two Arrays II
   Given two arrays, write a function to compute their intersection.

	Example:
	Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].

	Note:
	Each element in the result should appear as many times as it shows in both arrays.
	The result can be in any order.
*/

 /* Author: Jiayu Liu */
 /* Time: 1/2/17 */

 class Solution {
 public:
 	std::vector<int> Intersection(std::vector<int>& arr1, std::vector<int>& arr2) {
 		std::vector<int> res;
 		std::map<int, int> count;
 		std::vector<int> a1, a2;
 		a1.push_back(arr1.at(0));
 		a2.push_back(arr2.at(0));
 		
 		for(int i=0;i<arr1.size();i++) {
 			count[arr1.at(i)]=0;
 			for(int j=0;j<a1.size();j++) {
 				count[arr1.at(i)]++;
 				if(a1.at(j)!=arr1.at(i))
 					a1.push_back(arr1.at(i));
 			}
 		}

 		for(int i=0;i<arr2.size();i++) {
 			for(int j=0;j<a2.size();j++) {
 				count[arr2.at(i)]++;
 				if(a2.at(j)!=arr2.at(i))
 					a2.push_back(arr2.at(i));
 			}
 		}

 		for(int i=0;i<count.size();i++) {
 			for(int j=0;j<count[i];j++) {
 				res.push_back(i);
 			}	
 		}

 		return res;
 	}
 };

 //Another solution in an intuitive way
class Solution {
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		sort(nums1.begin(),nums1.end());
		sort(nums2.begin(),nums2.end());
		int i1=0,i2=0;
		int n1=nums1.size(),n2=nums2.size();
		vector<int>res;
		while(i1<n1&&i2<n2) {
			if(nums1[i1]==nums2[i2]) {
				res.push_back(nums1[i1]);
				i1++,i2++;
			} 
			else if(nums1[i1]>nums2[i2]) {
				i2++;
			} 
			else {
				i1++;
		}
	}
	return res;
	}
}