/* 
   118. Pascal's Triangle
   Given numRows, generate the first numRows of Pascal's triangle.

   For example, given numRows = 5,
   Return

   [
        [1],
       [1,1],
      [1,2,1],
     [1,3,3,1],
    [1,4,6,4,1]
   ]
*/

 /* Author: Jiayu Liu */
 /* Time: 12/28/16 */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri;
        numElements = numRows;
        for (unsigned int i = 0; i<numRows; i++)
            for (unsigned int j = 0; j<numElements; j++) {
                if(j==0)
                    tri[i][0]=1;
                else if(j==numElements-1)
                    tri[i][numElements-1]=1;
                else if(i>=2 && j!=0 && j!=numElements-1) {
                    tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
                }
        }
        return tri;
    }
};